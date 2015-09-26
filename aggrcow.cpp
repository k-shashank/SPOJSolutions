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
int min(int a,int b){
	return (a<b)?a:b;
}
long long int n,c,x[100001];
int f(long long int d){
	long long int cowsplaced=1;
	long long int lastpos=x[0];
	for(long long int i=1;i<n;i++){
		if(x[i]-lastpos>=d){
			cowsplaced++;
			if(cowsplaced==c)return 1;
            lastpos=x[i];}
	}
	  return 0;
}

long long int binSearch(){
	long long int start=0,end=x[n-1];
	while(start<end){
		long long int mid=(start+end)/2;
		if(f(mid)==1)start=mid+1;
		else end=mid;}
	return start-1;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		cin>>n>>c;
		for (int i = 0; i < n; ++i)
		{
			cin>>x[i];
		}
		sort(x,x+n);
		cout<<binSearch()<<endl;
	}
	return 0;
}