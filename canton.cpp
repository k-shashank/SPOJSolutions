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
		long long int n,p,q;
		cin>>n;
		long long int k=1;
		while(((k*(k+1))/2)<n)k++;
		k--;
		if(k%2==0){
			q=n-((k*(k+1))/2);
			p=k+2-q;
			cout<<"TERM "<<n<<" IS "<<p<<"/"<<q<<endl;
		}
		else{
			p=n-((k*(k+1))/2);
			q=k+2-p;
			cout<<"TERM "<<n<<" IS "<<p<<"/"<<q<<endl;
		}
	}
	return 0;
}