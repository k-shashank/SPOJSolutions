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
	string a,b;
	while(cin>>a>>b){
		int x[26],y[26];
		for (int i = 0; i < 26; ++i)
		{
			x[i]=0;
			y[i]=0;
		}
		for (int i = 0; i < a.length(); ++i)
		{
			x[a[i]-'a']++;
		}
		for (int i = 0; i < b.length(); ++i)
		{
			y[b[i]-'a']++;
		}
		int count=0;
		for (int i = 0; i < 26; ++i)
		{
			int j=min(x[i],y[i]);
			char c='a'+i;
			for(int k=0;k<j;k++)cout<<c;
		}
		cout<<endl;
	}
	return 0;
}