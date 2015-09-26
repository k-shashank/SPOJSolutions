#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n!=0){
		int a[n];
		a[0]=1;
		for (int i = 1; i < n; ++i)
		{
			a[i]=((i+1)*(i+1))+a[i-1];
		}
		cout<<a[n-1]<<endl;
		cin>>n;
	}
	return 0;
}