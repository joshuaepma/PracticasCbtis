#include <iostream>

int p[300],m=0;

using namespace std;

void hamada(int n){
	for(int i=0;i<n;++i){
		cin>>p[i];
	}
	if(p[0]!=p[n-1]){
		if(p[0]<p[n-1]){
			m+=p[n-1]-p[0];
		}else{
			m+=p[0]-p[n-1];
		}
	}
	for (int i = 1,j=n-2; i <= j; ++i,--j){
		int a1=i-1,a2=j+1;
		if(p[i]>p[a1] && p[i]-p[a1]!=1){
			m+=p[i]-p[a1]+1;
			p[i]-=p[a1]-1;
		}else if(p[i]<p[a1] && p[a1]-p[i]!=1){
			m+=p[a1]-p[i]-1;
			p[i]+=p[a1]-2;
		}
		if(p[j]>p[a2] && p[j]-p[a2]!=1){
			m+=p[j]-p[a2]-1;
			p[j]-=p[a2]-1;
		}else if(p[j]<p[a2] && p[a2]-p[j]!=1){
			m+=p[a2]-p[j]-1;
			p[j]+=p[a2]-2;
		}
		if(p[i]!=p[j]){
			if(p[i]<p[j]){
				m+=p[j]-p[i];
			}else{
				m+=p[i]-p[j];
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=0;i<2;i++){
		hamada(n);
	}
	cout<<m;
	return 0;
}