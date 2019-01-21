#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	bool flag=true;
	cin>>s;
	int in,fin;
	for(int i=0;i<s.size();++i){
		for(int j=s.size()-1;j>i;--j){
			flag=true;
			if(s[i]==s[j]){
				in=i;fin=j;
				while(in<fin){
					if(s[in]!=s[fin]){
						flag=false;
						break;
					}
					in++;fin--;
				}
				if(flag){
					cout<<"Si";
					return 0;
				}	
			}
		}
	}
	cout<<"no";
	return 0;
}