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
#define z(a,n) for(int i=0;i<n;i++)a[i]=0;
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
		if(n==0||n==1)cout<<"1\n";
		else{ll count=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
		p(count);}
	}
	return 0;
}