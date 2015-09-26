#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
using namespace std;
int dp[2001][2001],v[2001];
typedef pair<int,int> mypair;
int max(int a,int b){
	return (a>b)?a:b;
}
int dpfunc(int a,int b,int n){
	if(dp[a][b]!=-1)return dp[a][b];
	int age=a+n-b;
	if(a==b){dp[a][b]=age*v[a];
		return dp[a][b];}
	dp[a][b]=max(age*v[a]+dpfunc(a+1,b,n),age*v[b]+dpfunc(a,b-1,n));
	return dp[a][b];
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<n;j++){
			dp[i][j]=-1;
		}
	}
	cout<<dpfunc(0,n-1,n)<<endl;
	return 0;
}