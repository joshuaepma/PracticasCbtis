#include <iostream>

using namespace std;

bool areRotation(string s1,string s2){
	if(s1.size()!=s2.size())
		return false;
	string aux=s1+s1;
	return (aux.find(s2) != string::npos);
}

int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	if(areRotation(s1,s2))
		cout<<"Si";
	else
		cout<<"No";
	return 0;
}