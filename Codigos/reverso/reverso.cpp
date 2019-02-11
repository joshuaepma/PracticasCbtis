#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int fin = s.size();
	for(int i=fin;i>=0;i--)
		cout<<s[i-1];
	return 0;
}