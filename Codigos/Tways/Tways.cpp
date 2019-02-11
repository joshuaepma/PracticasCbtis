#include <iostream>
#include <map>
#include <iterator>

using namespace std;

bool checar(string s1,string s2){

}

int main(int argc, char const *argv[])
{
	string s1,s2;
	int cont[100]={0};
	bool flag=0;
	cin>>s1>>s2;
	if(s1.size()==s2.size()){

	}else if(s1.size()+1==s2.size()){

	}else if(s1.size()-1==s2.size()){
		for (int i = 0; i < s1.size(); ++i)
		{
			for(int j=i;j < s2.size();++j){
				if(s1[i]==s2[j]){
					cont[i]++;
				}
			}
		}
		cout<<flag;
	}else{
		cout<<"No";
	}
	return 0;
}