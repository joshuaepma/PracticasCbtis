#include <iostream>

using namespace std;

string replaceBlankWith20(string str) 
{ 
    string replaceby = "%20"; 
    int n = 0; 
    // loop till all space are replaced 
    while ((n = str.find(" ", n)) != string::npos ) 
    { 
        str.replace(n, 1, replaceby); 
        n += replaceby.length(); 
    } 
    return str; 
} 

int main(int argc, char const *argv[])
{
	string s;
    //obtengo toda la line incluyendo espacios
	getline(cin,s);
	cout << replaceBlankWith20(s) << endl;
	return 0;
}