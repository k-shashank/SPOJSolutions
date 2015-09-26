#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n!=0){
		string a;
		cin>>a;
		int rows=a.length()/n;
		for (int i = 0; i < n; ++i)
		{
			for (int j=0;j<rows;++j)
			{
				if(j%2==0)cout<<a[(n*j)+i];
				else cout<<a[(n*(j+1))-1-i];
			}
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}