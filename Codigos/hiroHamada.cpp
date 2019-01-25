#include <iostream>

int p[300],m=0;

using namespace std;

void hamada(int n){
	for(int i=0;i<n;++i){
		cin>>p[i];
	}
	cout<<endl<<endl;
	for(int i=0;i<n;++i){
		cout<<p[i]<<" ";
	}
	cout<<endl<<endl;
	if(p[0]!=p[n-1]){
		if(p[0]<p[n-1] && p[n-1]-p[0]==1){
			m+=p[n-1]-p[0];
			p[0]+=p[n-1]-p[0];
		}else if(p[0]<p[n-1] && p[n-1]!=1){
			m+=p[n-1]-p[0];
			p[n-1]-=p[0];
		}else if(p[0]>p[n-1] && p[0]-p[n-1]!=1){
			m+=p[0]-p[n-1];
			p[n-1]+=p[0]-p[n-1];
		}
	}
	cout<<endl<<m<<endl;
	for(int i=0;i<n;++i){
		cout<<p[i]<<" ";
	}
	cout<<endl<<endl;
	for (int i = 1,j=n-2; i <= j; ++i,--j){
		int a1=i-1,a2=j+1;
		if(p[i]>p[a1] && p[i]-p[a1]!=1){
			m+=p[i]-p[a1]-1;
			p[i]-=p[a1]-1;
			cout<<endl<<m<<endl;
		}else if(p[i]<p[a1] && p[a1]-p[i]!=1){
				p[i]+=p[a1]-p[i];
				m+=p[a1]-p[i];
				cout<<endl<<m<<endl;
		}
		if(p[j]>p[a2] && p[j]-p[a2]!=1){
			m+=p[j]-p[a2]-1;
			p[j]-=p[a2]-1;
			cout<<endl<<m<<endl;
		}else if(p[j]<p[a2] && p[a2]-p[j]!=1){
			p[j]+=p[a2]-p[i];
			m+=p[a2]-p[j];
			cout<<endl<<m<<endl;
		}
		if(p[i]!=p[j]){
			if(p[i]<p[j]){
				m+=p[j]-p[i];
				p[i]+=p[j]-p[i];
				cout<<endl<<m<<endl;
			}else{
				m+=p[i]-p[j];
				p[j]+=p[i]-p[j];
				cout<<endl<<m<<endl;
			}
		}
	}
	cout<<endl<<endl;
	for(int i=0;i<n;++i){
		cout<<p[i]<<" ";
	}
	cout<<endl<<m<<endl;
}

void checar(int n){
	int s;
	for (int i = 0; i < n; ++i){
		cin>>s;
		if(p[i]<s){
			m+=s-p[i];
			cout<<endl<<m<<endl;
		}else{
			m+=p[i]-s;
			cout<<endl<<m<<endl;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	hamada(n);
	checar(n);
	cout<<m;
	return 0;
}