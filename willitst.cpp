#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned long long int n;
	cin>>n;
	int flag=0;
	while(n>1){
		if(n%2==0)n/=2;
		else {flag=1;
			break;}
	}
	if(flag==0)cout<<"TAK\n";
	else cout<<"NIE\n";
	return 0;
}