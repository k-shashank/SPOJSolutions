#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
#include <cmath>
using namespace std;
typedef pair<int,int> mypair;
int max(int a,int b){
	return (a>b)?a:b;
}
int min(int a,int b){
	return (a<b)?a:b;
}
int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	while(t-->0){
		long long int n;
		cin>>n;
		bool flag=true;
		for (long long int i = 2; i*i <= n; ++i)
		{
			long long int count=0;
			while(n%i==0){
				n/=i;
				count++;
			}
			if(i%4==3&&count%2==1){flag=false;
				break;}
		}
		if(n%4==3)flag=false;
		if(flag)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}