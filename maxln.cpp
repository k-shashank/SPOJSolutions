#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int r;
		cin>>r;
		long long int s;
		s=4*r*r;
		cout<<"Case "<<(i+1)<<": "<<s<<".25"<<endl;
	}
	return 0;
}