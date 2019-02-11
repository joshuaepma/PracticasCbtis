#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int fin = s.size() , cont[fin] = {0};
	for (int i = 0 ; i < fin ; i++){
		for (int j = 0; j < fin; j++){
			if(s[i] == s[j])cont[i]++;
		}
		if(cont[i]==1)cout<<s[i]<<" es unico"<<endl;
	}

	return 0;
}