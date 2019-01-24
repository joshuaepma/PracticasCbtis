#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int fin=s.size(),i=0,cont=0;
	while(i<fin){
		for(int j=i;j<=fin;++j){
			if(s[i]==s[j]){
				cont++;
			}else{
				cout<<s[i]<<cont;
				i=j;
				cont=0;
				break;
			}
		}

	}
	return 0;
}