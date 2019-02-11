#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cstdio>

#ifndef MAXN
#define MAXN 300001
#endif

using namespace std;

int a[MAXN],b[MAXN];
int n;

int f(int x){
	int m=0;
	for (int i = 0; i < n; ++i)
	{
		m+=abs(a[i]-x);
	}
	return m;
}

int main(int argc, char const *argv[])
{
	int m;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)cin>>a[i];
	int l,ma=0,in=0,mi;
	for (int i = 0; i < n; ++i)
		ma=max(ma,a[i]);
	l=ma/2;
	while(l<ma){
		if(f(l)>m){
			ma=l;//l--;
			l=ma/2+in;
		}else if(f(l)<m){
			in=l;//l++;
			l=ma/2+in;
		}else if(f(l)==m){
			cout<<l;
		}
	}
	cout<<l;
	return 0;
}
/*
4 7	
20 15 10 17	

15
 */