#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
long long int ncr(int n,int r){
	if(r>n/2)r=n-r;
	long long int ans=1;
	for (int i = 1; i <=r; ++i)
	{
		ans*=n-r+i;
		ans/=i;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int n,k;
		cin>>n>>k;
		cout<<ncr(n-1,k-1)<<endl;
	}
	return 0;
}