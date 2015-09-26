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

long long int n,m,ans;

void multiply(long long int F[2][2],long long int M[2][2])
{
  long long int x=(F[0][0]*M[0][0]%m+F[0][1]*M[1][0]%m)%m;
  long long int y=(F[0][0]*M[0][1]%m+F[0][1]*M[1][1]%m)%m;
  long long int z=(F[1][0]*M[0][0]%m+F[1][1]*M[1][0]%m)%m;
  long long int w=(F[1][0]*M[0][1]%m+F[1][1]*M[1][1]%m)%m;
  F[0][0]=x;
  F[0][1]=y;
  F[1][0]=z;
  F[1][1]=w;
}

void power(long long int F[2][2],long long int n)
{
  if(n==0||n==1)return;
  long long int M[2][2]={{1,1},{1,0}};
  power(F,n/2);
  multiply(F,F);
  if(n%2!=0)multiply(F,M);
}

long long int fib(long long int n)
{
  long long int F[2][2]={{1,1},{1,0}};
  if(n==0)return 0;
  power(F,n-1);
  return F[0][0];
}
 
int main(int argc, char const *argv[])
{
	long long int t;
	scanf("%lld",&t);
	while(t-->0){
		scanf("%lld %lld",&n,&m);
		ans=(2*(fib(n+2)-1)-n)%m;
		if(ans<0)ans+=m;
		printf("%lld\n",ans%m);
	}
	return 0;
}