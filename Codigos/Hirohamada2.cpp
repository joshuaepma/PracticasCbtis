#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#ifndef MAXN
#define MAXN 300001
#endif

using namespace std;

int a[MAXN],b[MAXN];
int n;

int f(int x){
	int m;
	for (int i = 0; i < n; ++i)
	{
		m+=abs(a[i]-x);
		m+=abs(b[i]-x);	
	}
	return m;
}

int main(int argc, char const *argv[])
{
	cin>>n;
	for (int i = 0; i < n; ++i)cin>>a[i];
	for (int i = 0; i < n; ++i)cin>>b[i];
	int l,max=0,in;
	for (int i = 0; i < n; ++i)
		max=max(max,max(a[i],b[i]));
	l=max/2;
	while(in<max){
		if(f(l)<f(l+1)){
			l=max/2;
		}else{

		}
		in++;
	}
	cout<<f(l);
	return 0;
}