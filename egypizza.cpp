#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x=0,y=0,z=0;
	cin>>n;
	char a,b,c;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b>>c;
		if(a=='1'&&c=='4')x++;
		if(a=='1'&&c=='2')y++;
		if(a=='3'&&c=='4')z++;
	}
	//cout<<x<<" "<<y<<" "<<z<<endl;
	int count=1;
	while(x!=0&&z!=0){
		x--;
		z--;
		count++;
	}
	//cout<<count<<endl;
	if(x==0){
		count+=y/2+y%2+z;
		z=0;
		y=0;
	}
	else{
		while(x>=2&&y>0){
			x-=2;
			y--;
			count++;
		}
		if(y==0){if(x%4==0)count+=x/4;
			else count+=x/4+1;}
		else if(x<2){if(x==1)count+=y/2+1;
			else if(x==0)count+=y/2+y%2;}
	}
	cout<<count<<endl;
	return 0;
}