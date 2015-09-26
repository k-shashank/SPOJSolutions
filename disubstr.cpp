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
#define s(n) scanf("%lld",&n)
#define p(n) printf("%lld\n",n)
#define f(a,b,c) for(int a=b;a<c;a++)
#define ll long long int
#define z(a,n) for(int i=0;i<n;i++)a[i]=0;
using namespace std;
ll max(ll a,ll b){
	return (a>b)?a:b;
}
ll min(ll a,ll b){
	return (a<b)?a:b;
}
map<string,ll> m;
int main(int argc, char const *argv[])
{
	ll t;
	s(t);
	while(t-->0){
		string s;
		cin>>s;
		m[s]++;
		ll i=1,n=s.length();
		while(i<=n){
			for (int j = 0; j <=n-i; ++j)
			{
				string s1=s.substr(j,i);
				m[s1]++;
			}
			i++;
		}
		ll c=m.size();
		p(c);
		m.clear();
	}
	return 0;
}