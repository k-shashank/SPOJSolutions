#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		long long int n,sum=0;
		cin>>n;
		long long int a[n];
		for (int i = 0; i <n ; ++i)
		{
			cin>>a[i];
			sum+=a[i];
			sum=sum%n;
		}
		if(sum%n==0)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}