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
#define f(a,b,c) for(a=b;a<c;a++)
#define ll long long int
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
	ll t;
	s(t);
	while(t-->0){
		ll n;
		s(n);
		ll a[5000],i,b[n],x;
		for (i = 0; i < 5000; ++i)
		{
			a[i]=0;
		}
		int flag=0;
		for (i = 0; i < n; ++i)
		{
			s(b[i]);
			a[b[i]+1000]++;
		}
		for (i = 0; i < n; ++i)
		{
			if(a[b[i]+1000]>n/2){flag=1;
				x=b[i];
				break;}
		}
		if(flag==1)printf("YES %lld\n",x);
		else printf("NO\n");
	}
	return 0;
}