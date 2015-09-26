#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
using namespace std;
typedef pair<int,int> mypair;
int max(int a,int b){
	if(a>b)return a;
	else return b;
}
int main(int argc, char const *argv[])
{
	int b,n;
	cin>>b>>n;
	while(b!=0&&n!=0){
		int dp[501][101],a[n],c[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i]>>c[i];
		}
		for (int i = 0; i <=b; ++i)
		{
			dp[i][0]=0;
		}
		for (int i = 0; i <=n; ++i)
		{
			dp[0][i]=0;
		}
		for (int i = 1; i <b+1 ; ++i)
		{
			for(int j=1;j<n+1;j++){
				if(i<a[j-1])dp[i][j]=dp[i][j-1];
				else dp[i][j]=max(dp[i][j-1],dp[i-a[j-1]][j-1]+c[j-1]);
				//cout<<dp[i][j]<<" "<<i<<" "<<j<<endl;
			}
		}
		int energy=0;
		for (int i = 0; i <=b; ++i)
		{
			if(dp[i][n]==dp[b][n]){energy=i;
				break;}
		}
		cout<<energy<<" "<<dp[b][n]<<endl;
		cin>>b>>n;
	}
	return 0;
}