#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n!=0){
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int flag=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==i+1)continue;
			else if(i+1==a[a[i]-1])continue;
			else {flag=1;
				break;}
		}
		if(flag==1)cout<<"not ambiguous\n";
		else cout<<"ambiguous\n";
		cin>>n;
	}
	return 0;
}