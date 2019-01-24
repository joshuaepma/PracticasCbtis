#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	//arreglo de string para guardar varias cadenas
	string s[100],aux;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			//de esta forma invierto la cadena
			aux = string(s[j].rbegin(),s[j].rend());
			//con esta funcion la comparo, si es diferente de cero entonces no es igual
			if(s[i].compare(aux)==0){
				cout<<s[i].size()<<" "<<s[i][s[i].size()/2];
				return 0;
			}
		}

	}
	return 0;
}