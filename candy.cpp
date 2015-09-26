#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n!=-1){
		int a[n],sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0)cout<<"-1\n";
		else{
			int count=0;
			for (int i = 0; i < n; ++i)
			{
				count+=abs((sum/n)-a[i]);
			}
			count/=2;
			cout<<count<<endl;
		}
		cin>>n;
	}
	return 0;
}