#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	while(t-->0){
		int e,f,n;
		cin>>e>>f;
		cin>>n;
		int p[n],w[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>p[i]>>w[i];
		}
		int x=f-e+1;
		int dp[x];
		dp[0]=0;
		for (int i = 1; i < x; ++i)
		{
			dp[x]=1000000;
		}
		for (int i = 1; i < x; ++i)
		{
			int min=999999;
			for (int j = 0; j < n; ++j)
			{
				if(i-w[j]<0)continue;
				else if((p[j]+dp[i-w[j]])<min){min=p[j]+dp[i-w[j]];
					//cout<<i<<" "<<j<<" "<<w[j]<<" "<<p[j]+dp[i-w[j]]<<endl;
			}}
			//cout<<min<<endl;
			dp[i]=min;
		}
		if(dp[x-1]!=999999)cout<<"The minimum amount of money in the piggy-bank is "<<dp[x-1]<<".\n";
		else cout<<"This is impossible.\n";
	}
	return 0;
}
