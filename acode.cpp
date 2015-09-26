#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	string n;
	cin>>n;
	while(n[0]!='0'){
		int flag=0;
		for (int i = 0; i < n.length(); ++i)
		{
			if(n[i]=='0'&&(n[i-1]-'0'==0||n[i-1]-'0'>2)){flag=1;}
		}
		if(flag==1)cout<<"0\n";
		else{
		int l=n.length();
		long long int dp[l];
		dp[0]=1;
		int temp=10*(n[0]-'0')+(n[1]-'0');
		if(temp<=26){if(temp==10||temp==20)dp[1]=1;
			else dp[1]=2;}
		else dp[1]=1;
		int i=2;
		if(n[2]=='0'){dp[2]=dp[0];
			i++;}
		for (; i < l; ++i)
		{
			dp[i]=dp[i-1];
			if(n[i+1]=='0'){dp[i+1]=dp[i];
				i++;
				continue;}
			temp=10*(n[i-1]-'0')+(n[i]-'0');
			if(temp<=26&&temp>9)dp[i]+=dp[i-2];
		}
		cout<<dp[l-1]<<endl;}
		cin>>n;
	}
	return 0;
}