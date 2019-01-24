#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int in=0,fin;
	bool flag = false;
    string p;
    cin>>p;
    fin=p.size();
    while(in<=fin && fin>0){
        if(p[in] != p[fin] && in == fin){
            in = 0;
            fin--;
        }else if(p[in] == p[fin]){
        	int nin=in,nfin=fin;
        	while(nin<nfin){
        		if(p[nin] != p[nfin]){
        			break;
        		}else{
        			fin=0;
        		}
        		nin++;nfin--;
        	}
        }
        in++;
    }
    if(flag)
    	cout<<"Si"<<endl;
    else
    	cout<<"no"<<endl;
	return 0;
}