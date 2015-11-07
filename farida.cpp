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
    ll t,cases=1;
    s(t);
    while(t--){
        ll n;
        s(n);
        ll a[n];
        f(i,0,n)s(a[i]);
        ll dp[n];
        dp[0]=a[0];
        dp[1]=maxi(dp[0],a[1]);
        f(i,2,n){
        	dp[i]=maxi(dp[i-1],dp[i-2]+a[i]);
        }
        ll ans;
        if(n==0)ans=0;
        else ans=dp[n-1];
        cout<<"Case "<<cases<<": "<<ans<<endl;
        cases++;
    }
    return 0;
}