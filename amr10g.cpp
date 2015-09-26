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
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int n,k;
		cin>>n>>k;
		long long int h[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>h[i];
		}
		sort(h,h+n);
		long long int min=1000000000;
		for (int i = 0; i <=n-k; ++i)
		{
			if(h[i+k-1]-h[i]<min){
				min=h[i+k-1]-h[i];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}