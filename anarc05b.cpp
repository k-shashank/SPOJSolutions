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
	ll n,m;
	s(n);
	while(n!=0){
		ll a[n];
		int h[25000];
		z(h,25000);
		for (int i = 0; i < n; ++i)
		{
			s(a[i]);
			h[a[i]+10000]++;
		}
		s(m);
		ll b[m];
		for (int i = 0; i < m; ++i)
		{
			s(b[i]);
			h[b[i]+10000]++;
		}
		ll i=0,j=0,sum=0,sum1,sum2;
		while(1){
			sum1=0;
			sum2=0;
			while(i<n&&h[a[i]+10000]<2){
				sum1+=a[i];
				i++;
				//cout<<sum1<<" \n";
			}
			if(i<n){sum1+=a[i];
			i++;}
			while(j<m&&h[b[j]+10000]<2){
				sum2+=b[j];	
				//cout<<sum2<<" \n";
				j++;}
			if(j<m){sum2+=b[j];
			j++;}
			if(sum1>sum2)sum+=sum1;
			else sum+=sum2;
			if(i>=n&&j>=m)break;
		}
		p(sum);
		s(n);
	}
	return 0;
}