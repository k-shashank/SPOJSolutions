#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		long long int n;
		cin>>n;
		cout<<(n*(n+2)*((2*n)+1))/8<<endl;
	}
	return 0;
}