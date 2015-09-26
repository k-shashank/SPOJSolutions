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
		int ng,nm,count1=0,count2=0;
		cin>>ng>>nm;
		int a[ng],b[nm];
		for (int i = 0; i < ng; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < nm; ++i)
		{
			cin>>b[i];
		}
		sort(a,a+ng);
		sort(b,b+nm);
		while(count1<ng&&count2<nm){
			if(b[count2]>a[count1])count1++;
			else count2++;
		}
		if(count1==ng){cout<<"MechaGodzilla\n";}
		else if(count2==nm){cout<<"Godzilla\n";}
	}
	return 0;
}