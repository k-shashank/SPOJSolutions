#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int n,m;
		cin>>n>>m;
		int dp[n][m];
		string s;
		queue<int> q;
		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			for (int j = 0; j < m; ++j)
			{
				dp[i][j]=s[j]-'0';
				if(dp[i][j]==1){
					q.push(i);
					q.push(j);
				}
			}
		}
		while(!q.empty()){
			int i=q.front();
			q.pop();
			int j=q.front();
			q.pop();
			if(i!=0&&dp[i-1][j]!=1&&(dp[i-1][j]==0||dp[i-1][j]>dp[i][j]+1)){
				dp[i-1][j]=dp[i][j]+1;
				q.push(i-1);
				q.push(j);}
			if(i!=n-1&&dp[i+1][j]!=1&&(dp[i+1][j]==0||dp[i+1][j]>dp[i][j]+1)){
				dp[i+1][j]=dp[i][j]+1;
				q.push(i+1);
				q.push(j);}
			if(j!=0&&dp[i][j-1]!=1&&(dp[i][j-1]==0||dp[i][j-1]>dp[i][j]+1)){
				dp[i][j-1]=dp[i][j]+1;
				q.push(i);
				q.push(j-1);}
			if(j!=m-1&&dp[i][j+1]!=1&&(dp[i][j+1]==0||dp[i][j+1]>dp[i][j]+1)){
				dp[i][j+1]=dp[i][j]+1;
				q.push(i);
				q.push(j+1);}
		}
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++){
				cout<<dp[i][j]-1;
				if(j!=m-1)cout<<" ";
				else cout<<endl;
			}
		}
	}
	return 0;
}