#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,n1,n2,n3;
	cin>>n;
	n1=0;
	n2=1;
	for(int i=1;i<n;i++){
		//simple fibonacci
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	cout<<n1<<" "<<n2;
	return 0;
}