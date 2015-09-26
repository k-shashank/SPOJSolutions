#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
typedef pair<int,int> mypair;
int max(int a,int b){
	return (a>b)?a:b;
}
int min(int a,int b){
	return (a<b)?a:b;
}
/*long long int count(string s,int a,int b){
	if(a>=b)return 0;
	if(s[a]==s[b])return count(s,a+1,b-1);					// requires [6100][6100] memory for memoization.... not possible
	return 1+min(count(s,a,b-1),count(s,a+1,b));
}*/
int lcs(string s,string r,int n){
	int dp[2][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				if(i==0){if(s[0]==r[0])dp[0][0]=1;
				else dp[0][0]=0;}
				else {if(s[i]==r[0])dp[0][0]=1;
					else dp[0][0]=dp[1][0];}}
		else if(i==0){if(s[0]==r[j])dp[0][j]=1;
			else dp[0][j]=dp[0][j-1];}
		else {if(s[i]==r[j])dp[0][j]=1+dp[1][j-1];
			else dp[0][j]=max(dp[1][j],dp[0][j-1]);}}
		for (int j=0;j<n;j++)
		{swap(dp[0][j],dp[1][j]);}
	}
	return dp[1][n-1];
}
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	while(t-->0){
		string s,r;
		cin>>s;
		r=s;
		reverse(r.begin(),r.end());
		//cout<<count(s,0,s.length()-1)<<endl;
		cout<<s.length()-lcs(s,r,s.length())<<endl;
	}
	return 0;
}