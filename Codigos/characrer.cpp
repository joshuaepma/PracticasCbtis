#include <iostream>
#include <map>
#include <iterator>


using namespace std;

int main(int argc, char const *argv[])
{
	map<int,char> mp;
	string s;
	cin>>s;
	int fin=s.size();
	for(int i=0;i<fin;i++){
		mp.insert({i+1,s[i]});
	}
	for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	return 0;
}