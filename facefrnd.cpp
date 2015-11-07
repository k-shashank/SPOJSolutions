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
    ll n;
    s(n);
    map<ll,ll> frnds,frndfrnds;
    f(i,0,n){
        ll m,x;
        s(x);
        s(m);
        frnds[x]=1;
        f(j,0,m){
            ll y;
            s(y);
            frndfrnds[y]=1;
        }
    }
    ll count=0;
    typedef map<ll,ll>::iterator it_type;
    for(it_type iterator = frnds.begin(); iterator != frnds.end(); iterator++)frndfrnds[iterator->first]=0;
    for(it_type iterator = frndfrnds.begin(); iterator != frndfrnds.end(); iterator++)if(iterator->second==1)count++;
    p(count);
    return 0;
}