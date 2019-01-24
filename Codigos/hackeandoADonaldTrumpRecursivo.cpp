#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//Esta funcion puede ser booleana

int hackear(string p,string d,int i,int j){
    if(i>j || j<i){
        return 1;
    }
    //en caso de que no sea igual regreso 0
    if(p[i]!=d[j]){
        return 0;
    }
    //vuelvo a llamar a la funcion
    return hackear(p,d,i+1,j-1);
}

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //mando las palabras
            if(hackear(s[i],s[j],0,s[i].length()-1)){
                    cout<<s[i].length()<<" "<<s[i][(s[i].length()-1)/2];
                    cout<<endl<<s[i];
                    return 0;
            }
        }
    }
}