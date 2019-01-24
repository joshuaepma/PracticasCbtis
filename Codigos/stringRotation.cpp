#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	bool flag=true;
	string s1,s2;
	cin>>s1>>s2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<s1.size();++i){
		if(s1[i]!=s2[i])flag=false;
	}
	if(flag)
		cout<<"Si"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}