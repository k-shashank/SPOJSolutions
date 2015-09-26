#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int reverse(int a){
	int b=0;
	while(a%10==0){a/=10;}
	while(a>0){b=b*10+(a%10);
		a/=10;}
		return b;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int a,b;
		cin>>a>>b;
		cout<<reverse(reverse(a)+reverse(b))<<endl;
	}
	return 0;
}