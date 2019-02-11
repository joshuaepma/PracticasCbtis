#include <iostream>

using namespace std;

long long int a[100];

long long int fibonacci(long long int n){
	if(n==1){
		return n;
	}
	if(n==0){
		return n;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc, char const *argv[])
{
	long long int n,n1,n2,n3;
	cin>>n;
	cout<<fibonacci(n-1)<<" "<<fibonacci(n);
	return 0;
}