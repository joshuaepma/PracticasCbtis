#include <iostream>
#include <algorithm>

using namespace std;

string checkString(string s1,string s2){
	
	if(s1.size()==s2.size()){
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		for(int i=0;i<s1.size();++i){	
			if(s1[i]!=s2[i]){
				return "NO";
			}
		}
	}else{
		return "NO";
	}
	return "YES";
}

int main(int argc, char const *argv[])
{
	int n;
	string s1,s2;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s1>>s2;
		cout<<checkString(s1,s2)<<endl;
	}
	
	return 0;
}