#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void subtract(int* x,int a,int n){
		if(n<10){
			if(x[a-1]>=n)x[a-1]-=n;
			else {x[a-1]=10+x[a-1]-n;
				x[a-2]--;
				int i=a-2;
				while(x[i]<0){x[i]+=10;
					i--;}}
		}
		else{
			int i=0,l;
			while(n>0){
				l=n%10;
				if(x[a-1-i]>=l)x[a-1-i]-=l;
			else {x[a-1-i]=10+x[a-1-i]-l;
				x[a-2-i]--;
				int k=a-2-i;
				while(x[k]<0){x[k]+=10;
					k--;}}
			l=n/10;
			}
		}
}
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		string a;
		cin>>a;
		int x[a.length()];
		for (int j=0;j<a.length();++j)
		{
			x[j]=a[i]-'0';
		}
		int n;
		cin>>n;
		subtract(x,a.length(),n);
		for (int j=0;j<a.length(); ++j)
		{
			cout<<x[j];
		}
	}
	return 0;
}