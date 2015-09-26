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
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		double n,a,x;
		cin>>n;
		a=n-floor(n);
		x=a;
		int count=1;
		while(x>0.000001&&x<0.999999){
			count++;
			x=a*count;
			x=x-floor(x);
		}
		cout<<count<<endl;
	}
	return 0;
}