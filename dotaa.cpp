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
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int n,m,d;
		cin>>n>>m>>d;
		int h[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>h[i];
		}
		sort(h,h+n);
		int flag=0,count=0,i=0;
		while(count<=m&&i<n){
			if(h[i]<d){i++;
				continue;}
			else {count+=h[i]/d;
				if(h[i]%d==0)count--;
			i++;}}
		if(count>=m)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}