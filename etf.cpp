#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
#include <cmath>
using namespace std;
typedef pair<int,int> mypair;
int max(int a,int b){
	return (a>b)?a:b;
}
long long int fi(long long int n) 
{ 
    long long int result = n; 
    for(long long int i=2;i*i <= n;i++) 
    { 
        if (n % i == 0) result -= result / i; 
        while (n % i == 0) n /= i; 
    } 
    if (n > 1) result -= result / n; 
    return result; 
} 
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		long long int n,count=0;
		cin>>n;
		count=fi(n);
		cout<<count<<endl;
	}
	return 0;
}