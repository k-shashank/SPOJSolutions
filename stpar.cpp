#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n!=0){
		int a[n];
		stack<int> s;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int flag=0,need=1,i;
		for (i = 0; i < n-1; ++i)
		{
			while(s.size()!=0&&s.top()==need){need++;
				s.pop();}
			if(a[i]==need){need++;
				continue;}
			else if(s.size()!=0&&s.top()<a[i]){flag=1;
				break;}
			else {s.push(a[i]);}
		}
		//cout<<i<<endl;
		if(flag==1)cout<<"no\n";
		else if(flag==0)cout<<"yes\n";
		cin>>n;
	}
	return 0;
}