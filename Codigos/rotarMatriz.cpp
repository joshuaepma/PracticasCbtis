#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n=4,cont=0;
	//cin>>n;
	short int m[n][n],b[n][n],v[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			++cont;
			m[i][j]=cont;

		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = n-1,l = 0; j >= 0; --j,l++)
		{
			b[j][i]=m[i][l];
	

		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0,l = n-1; j >= 0; ++j,l--)
		{
			v[j][i]=m[i][l];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<m[i][j]<<" , ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<b[i][j]<<" , ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<v[i][j]<<" , ";
		}
		cout<<endl;
	}
	return 0;
}