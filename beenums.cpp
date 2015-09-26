#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	while(n!=-1){
		if(n%3!=1)cout<<"N\n";
		else{
			n/=3;
			if(n%2!=0)cout<<"N\n";
			else{
				long long int sum=0,i=1;
				while(sum<n){sum+=2*i;
					i++;}
				if(sum==n)cout<<"Y\n";
				else cout<<"N\n";
			}
		}
		cin>>n;
	}
	return 0;
}