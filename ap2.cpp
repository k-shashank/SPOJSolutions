#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		long long int a3,an3,sum,n,d,a;
		cin>>a3>>an3>>sum;
		n=(2*sum)/(a3+an3);
		d=(an3-a3)/(n-5);
		a=a3-(2*d);
		cout<<n<<endl;
		cout<<a;
		for (int i = 1; i < n; ++i)
		{
			cout<<" "<<a+(i*d);
		}
		cout<<endl;
	}
	return 0;
}