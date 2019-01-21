#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	getline(cin,s);
	int fin = s.size();
	for(int i = 0 ; i < fin ; i++){
		if(s[i]==32){
			cout<<"%20";continue;
		}
		cout<<s[i];
	}
	return 0;
}