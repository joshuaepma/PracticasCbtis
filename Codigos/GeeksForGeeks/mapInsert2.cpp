// C++ program to illustrate 
// map::insert({key, element}) 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 

	auto it = mp.find(2); 

	// inserts {3, 6} starting the search from 
	// position where 2 is present 
	mp.insert(it, { 3, 60 }); 

	// prints the elements 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	return 0; 
} 
