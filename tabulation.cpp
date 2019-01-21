#include <bits/stdc++.h> 

using namespace std;

int dp[100]={-1};

int solve(int x)
{
    if (x==0)
        return 1;
    if (dp[x]!=-1)
        return dp[x];
    return (dp[x] = x * solve(x-1));
}

int main(int argc, char const *argv[])
{
	// Tabulated version to find factorial x.
	int n;
	cin>>n;
	// base case 
	/*for (int i = 1; i <= n; i++){
	    dp[i] = dp[i-1] * i;
	}*/
	for (int i = 0; i < 100; ++i)
	{
		dp[i]=-1;
	}
	cout<<solve(n);
	return 0;
}
