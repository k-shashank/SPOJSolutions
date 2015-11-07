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
#include <set>
#define s(n) scanf("%lld",&n)
#define p(n) printf("%lld\n",n)
#define f(a,b,c) for(int a=b;a<c;a++)
#define ll long long int
#define z(a,n) for(int i=0;i<n;i++)a[i]=0;
#define MAX 2000000000
using namespace std;
ll maxi(ll a,ll b){
	return (a>b)?a:b;
}
ll mini(ll a,ll b){
	return (a<b)?a:b;
}
int main(int argc, char const *argv[])
{
	ll n,m;
	s(n);
	s(m);
	ll a[n];
	f(i,0,n)s(a[i]);
	ll max_ending_here=0,max_so_far=0,j=0;
	f(i,0,n){
		max_ending_here+=a[i];
		while(max_ending_here>m)max_ending_here-=a[j++];
		if(max_ending_here>max_so_far)max_so_far=max_ending_here;
	}
	p(max_so_far);
	return 0;
}