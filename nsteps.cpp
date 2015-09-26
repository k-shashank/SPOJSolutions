#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int x,y;
		cin>>x>>y;
		if(y==x){
			if(x%2==0)cout<<2*x<<endl;
			else cout<<(2*x)-1<<endl;
		}
		else if(y==x-2){
			if(x%2==0)cout<<(2*x)-2<<endl;
			else cout<<(2*x)-3<<endl;
		}
		else cout<<"No Number\n";
	}
	return 0;
}