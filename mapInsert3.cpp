// C++ program to illustrate 
// map::insert({key, element}) 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp, mp1; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 

	// inserts all elements in range 
	// [begin, end) in mp1 
	mp1.insert(mp.begin(), mp.end()); 

	// prints the elements 
	cout << "Elements in mp1 are\n"; 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	return 0; 
} 
