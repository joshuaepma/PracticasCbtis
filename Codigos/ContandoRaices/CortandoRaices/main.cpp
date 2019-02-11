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
int n,c;

int f(int x){
	int m=0;
	for (int i = 0; i < n; ++i)
	{
	    if(x<a[i])m+=a[i]-x;
	}
	return m;
}

int main(int argc, char const *argv[])
{
	cin>>n>>c;
	for (int i = 0; i < n; ++i)cin>>a[i];
	int l,ma=0,in=0,mi;
	for (int i = 0; i < n; ++i)
		ma=max(ma,a[i]);
	l=ma/2;
	while(l<=ma){
		if(f(l)<c){
			ma=l;//l--;
			l=(ma+in)/2;
		}else if(f(l)>c){
			in=l;//l++;
			l=(ma+in)/2;
		}else if(f(l)==c){
			cout<<l;
			break;
		}
	}
	return 0;
}
/*
4 7
20 15 10 17

15


5 20
4 42 40 26 46

36
*/
