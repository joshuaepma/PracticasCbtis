#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int r,b,a,x,y,i=3,c;
	cin>>r>>b;
	a=r+b;
	while(i<a/2){
		if(a%i==0){
			y=i;
			x=a/y;
			c=(2*x)+(2*y)-4;
			if(c==r){
				cout<<max(x,y)<<" "<<min(x,y);
				return 0;
			}
		}
		i++;
	}
	return 0;
}