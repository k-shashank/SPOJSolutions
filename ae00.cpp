#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	a[0]=1;
	for (int i = 1; i < n; ++i)
	{
		a[i]=a[i-1]+1;
		for (int j=2;j<=sqrt(i+1);++j)
		{
			if((i+1)%j==0)a[i]++;
		}
	}
	cout<<a[n-1];
	return 0;
}