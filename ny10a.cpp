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
	while(t-->0){
		int n,b[8];
		cin>>n;
		for (int i = 0; i < 8; ++i)
		{
			b[i]=0;
		}
		string a;
		cin>>a;
		for (int i = 0; i < 38; ++i)
		{
			if(a[i]=='H'&&a[i+1]=='H'&&a[i+2]=='H')b[7]++;
			else if(a[i]=='H'&&a[i+1]=='H'&&a[i+2]=='T')b[6]++;
			else if(a[i]=='H'&&a[i+1]=='T'&&a[i+2]=='H')b[5]++;
			else if(a[i]=='H'&&a[i+1]=='T'&&a[i+2]=='T')b[4]++;
			else if(a[i]=='T'&&a[i+1]=='H'&&a[i+2]=='H')b[3]++;
			else if(a[i]=='T'&&a[i+1]=='H'&&a[i+2]=='T')b[2]++;
			else if(a[i]=='T'&&a[i+1]=='T'&&a[i+2]=='H')b[1]++;
			else if(a[i]=='T'&&a[i+1]=='T'&&a[i+2]=='T')b[0]++;
		}
		cout<<n;
		for (int i = 0; i <8; ++i)
		{
			cout<<" "<<b[i];
		}
		cout<<endl;
	}
	return 0;
}