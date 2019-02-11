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
		m+=abs(b[i]-x);
	}
	return m;
}

int main(int argc, char const *argv[])
{
	cin>>n;
	for (int i = 0; i < n; ++i)cin>>a[i];
	for (int i = 0; i < n; ++i)cin>>b[i];
	int l,ma=0,in=0,mi;
	for (int i = 0; i < n; ++i)
		ma=max(ma,max(a[i],b[i]));
	l=ma/2;
	while(l<=ma){
		if(f(l)<f(l+1)){
			ma=l-1;//l--;
			l=ma/2+in+1;
		}else{
			in=l+1;//l++;
			l=ma/2+in-1;
		}
	}
	cout<<l<<endl;
	cout<<f(l);
	return 0;
}
