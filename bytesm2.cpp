#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int max(int x,int y){
	if(x>y)return x;
	else return y;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int h,w;
		cin>>h>>w;
		int a[h][w],dp[h][w];
		for (int i = 0; i < h; ++i)
		for(int j=0;j<w;j++){cin>>a[i][j];
			dp[i][j]=0;}
		for (int i = h-1; i >=0 ; i--)
		{
			for(int j=0;j<w;j++){
				if(i==h-1)dp[i][j]=a[i][j];
				else{
					if(j==0)dp[i][j]=max(a[i][j]+dp[i+1][j],a[i][j]+dp[i+1][j+1]);
					else if(j==w-1)dp[i][j]=max(a[i][j]+dp[i+1][j],a[i][j]+dp[i+1][j-1]);
					else dp[i][j]=max(a[i][j]+dp[i+1][j],max(a[i][j]+dp[i+1][j-1],a[i][j]+dp[i+1][j+1]));
				}
			}
		}
		int max=0;
		for (int i = 0; i < w; ++i)
		{
			if(dp[0][i]>max)max=dp[0][i];
		}
		cout<<max<<endl;
	}
	return 0;
}