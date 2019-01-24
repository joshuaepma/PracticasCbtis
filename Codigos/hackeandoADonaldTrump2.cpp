#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	string s[100],aux1,aux2;
	bool flag=true;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			flag=true;
			aux2 = s[j];
			aux1 = s[i];
			for(int in=0,fin=aux1.size()-1;in<fin;in++,fin--){
				if(aux1[in]!=aux2[fin]){
					flag=false;
					break;
				}
			}
			if(flag){
				cout<<s[i].size()<<" "<<s[i][s[i].size()/2];
				return 0;
			}
		}

	}
	return 0;
}