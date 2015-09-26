#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int min(int a,int b,int c){
	if(a<b){
		if(a<c)return a;
		else return c;
	}
	else{
		if(b<c)return b;
		else return c;
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	string a,b;
	while(t-->0){
		cin>>a;
		cin>>b;
		int n=a.length()+1;
		int m=b.length()+1;
		int** dp= new int*[n];
		for (int i = 0; i < n; ++i)
		{
			dp[i]=new int[m];
			for (int j=0;j<m;j++)
			{
				if(i==0)dp[i][j]=j;
				else if(j==0)dp[i][j]=i;
				else{
					int x=dp[i-1][j-1];
					if(a[i-1]!=b[j-1])x++;
					int y=dp[i-1][j]+1;
					int z=dp[i][j-1]+1;
					dp[i][j]=min(x,y,z);
				}
				//cout<<dp[i][j]<< " "<<i<<" "<<j<<endl;
			}
		}
		cout<<dp[n-1][m-1]<<endl;
	}
	return 0;
}