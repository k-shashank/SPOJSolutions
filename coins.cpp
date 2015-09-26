#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
long long int max(long long int a,long long int b){
	if(a>b)return a;
	else return b;
}
int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	long long int a[n];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	for (int i = 3; i <n ; ++i)
		{
			long long int sum=((i+1)/2)+((i+1)/4)+((i+1)/3);
			a[i]=max(i+1,sum);
		}
	cout<<a[n-1]<<endl;
	return 0;
}