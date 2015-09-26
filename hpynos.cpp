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
	long long int n,count=0,flag=0;
	cin>>n;
	while(n!=1){
		long long int sum=0;
		while(n>0){
			sum+=(n%10)*(n%10);
			n/=10;
		}
		n=sum;
		count++;
		if(count>1000000){flag=1;
			break;}
	}
	if(flag==1)cout<<"-1\n";
	else cout<<count<<endl;
	return 0;
}