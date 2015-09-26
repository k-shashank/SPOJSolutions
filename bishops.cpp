#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	for (int x = 0; x < 1024; ++x)
	{
		string s;
		cin>>s;
		int l=s.length();
		int a[l];
		for (int i = 0; i < l; ++i)
		{
			a[i]=s[i]-'0';
		}
		if(l==1&&a[0]==1)cout<<"1\n";
		else if(l==1&&a[0]==0)cout<<"0\n";
		else{
			int carry=0;
			for (int i = 0; i < l; ++i)
			{
				a[l-i-1]*=2;
				a[l-i-1]+=carry;
				if(i!=l-1){
				int b=a[l-i-1];
				if(b>9){a[l-i-1]=b%10;
					carry=1;}
			}}
			if(a[l-1]>=2)a[l-1]-=2;
			else if(a[l-1]==1){a[l-1]=9;
				int i=1;
				while(a[l-i-1]==0){a[l-i-1]=9;
					i++;}
				a[l-i-1]-=1;
			}
			else {a[l-1]=8;
				int j=1;
				while(a[l-j-1]==0){a[l-j-1]=9;
					j++;}
				a[l-j-1]-=1;}
			for (int i = 0; i < l; ++i)
			{
				cout<<a[i];
			}
			cout<<endl;}
	}
	return 0;
}