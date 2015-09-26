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
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	while(s!="00e0"){
		ll x,y,z,n;
		z=s[3]-'0';
		y=s[1]-'0';
		x=s[0]-'0';
		n=(10*x)+y;
		f(i,0,z)n*=10;
		vector<int> v;
		f(i,0,n)v.push_back(i+1);
		ll i=1,a=n;
		while(a!=1){
			cout<<v[i]<<" "<<i<<endl;
			v[i]=-1;
			a--;
			while(v[i]==-1&&i<n)i++;
			if(i>=n)i-=n;
			i++;
			while(i<n&&v[i]==-1)i++;
			if(i>=n)i-=n;
		}
		i=0;
		while(v[i]==-1)i++;
		cout<<v[i]<<endl;
		cin>>s;
		v.clear();
	}	
	return 0;
}