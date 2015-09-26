#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long long int x;
		int n;
		cin>>x>>n;
		int a[n];
		for (int j=0;j<n;++j)
		{
			cin>>a[j];
		}
		sort(a,a+n);
		int count=0;
		while(x>0&&count<n){x-=a[n-1-count];
			count++;}
		cout<<"Scenario #"<<i+1<<":\n";
		if(count==n&&x>0)cout<<"impossible\n\n";
		else{
		cout<<count<<endl;
		cout<<endl;}
	}
	return 0;
}