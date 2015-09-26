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
	string s;
	cin>>s;
	int x=1;
	while(s[0]!='-'){
		stack<char> a;
		for (int i = 0; i < s.length(); ++i)
		{
			if(a.empty()){a.push(s[i]);
				continue;}
			if(s[i]=='}'&&a.top()=='{')a.pop();
			else a.push(s[i]);
		}
		int n=0,m=0;
		while(a.size()!=0&&a.top()=='{'){n++;
			a.pop();
			if(a.empty())break;}
		while(a.size()!=0&&a.top()=='}'){m++;
			a.pop();
			if(a.empty())break;}
		int ans=(n+m)/2;
		if(n%2!=0&&m%2!=0)ans++;
		cout<<x<<". "<<ans<<endl;
		x++;
		cin>>s;
	}	
	return 0;
}