#include<iostream> 
using namespace std; 
  
// A recursive function to find nth catalan number 
unsigned long int catalan(unsigned int n) 
{ 
    // Base case 
    if (n <= 1) return 1; 
  
    // catalan(n) is sum of catalan(i)*catalan(n-i-1) 
    unsigned long int res = 0; 
    for (int i=0; i<n; i++) 
        res += catalan(i)*catalan(n-i-1); 
  
    return res; 
}

void f(unsigned int n){
    int n1=1,n2=1,n3=0;
    for(int i = 0 ; i < n ; ++i){
        cout<<n1<<" ";
        n3+=n1*n2;
        n1=n2;
        n2=n3;
    }

} 
  
// Driver program to test above function 
int main() 
{   
    int n;
    cin>>n;
    for (int i=0; i<n; i++) 
        cout << catalan(i) << " ";
    cout<<endl;
    f(n);
    return 0; 
} 

/*
knapsat
*/