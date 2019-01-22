#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	string s[100],aux;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < s[j].size(); ++j)
		{
			aux = string(s[j].rbegin(),s[j].rend());
			cout<<"palabra "<<s[i]<<" auxiliar "<<aux<<endl;
			if(s[i].compare(aux)==0){
				cout<<s[i].size()<<" "<<s[i][s[i].size()/2];
				return 0;
			}
		}

	}
	return 0;
}