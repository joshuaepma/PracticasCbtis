#include <iostream>
#include <map>
#include <iterator>

using namespace std;

bool checar(string s1,string s2){

}

int main(int argc, char const *argv[])
{
	string s,s2;
	cin>>s>>s2;
	int fin=s2.size();
	map<int, string> mp;
	for(int i=0;i<fin;i++){
		mp.insert({i+1,s2[i]});
	}
	for(int i=0;i<fin;i++){
		
	}

	return 0;
}