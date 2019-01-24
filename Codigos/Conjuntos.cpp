#include <iostream>

using namespace std;

int conjunto(string palabra1, string palabra2){
	int i=0 , fin=palabra1.size();
	bool flag = true;
	while(i<fin){
		if(palabra2[0] == palabra1[i]){
			int j = 0;
			while(j<palabra2.size()){
				if(palabra2[j] != palabra1[i]){
					flag=false;
				}
				j++;i++;
			}
		}
		i++;
	}
	return flag;
}

int main(){
	string palabra1,palabra2;
	cin>>palabra1>>palabra2;
	if(conjunto(palabra1,palabra2))
		cout<<"si es";
	else
		cout<<"no es";

}