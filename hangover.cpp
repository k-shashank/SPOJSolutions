#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	float n;
	cin>>n;
	while(n!=0.00){
		float i=1;
		while(n>0){i++;
			n-=1/i;}
		cout<<i-1<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}