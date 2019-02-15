#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,ant=0,cont=0,p,acont=0;
	cin>>n;
	for(int i = 0;i < n; i++){
		cin>>m;
		if(m > ant){
			cont++;
		}else{
			if(cont > acont){
				p=i;
			}
			acont = cont;
			cont=1;
		}
		ant = m;
	}
	cout<<(p)+cont;
	return 0;
}