#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int a,b,c;
	cin>>a>>b>>c;
	while(a!=0&&b!=0&&c!=0){
		if((b-a)==(c-b)){cout<<"AP "<<c+b-a<<endl;}
		else {cout<<"GP "<<c*(b/a)<<endl;}
	cin>>a>>b>>c;
	}
	return 0;
}