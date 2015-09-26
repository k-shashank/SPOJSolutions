#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
using namespace std;
typedef pair<int,int> mypair;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		long long int n;
		cin>>n;
		long long int ans=(3*n*n)+n;
		ans/=2;
		cout<<ans%1000007<<endl;
	}
	return 0;
}