#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int convert(string s){
	int value=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(isdigit(s[i])==0)return -1;
		value=value*10+(s[i]-'0');
	}
	return value;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		string s1,s2,s3,s4,s5;
		cin>>s1>>s2>>s3>>s4>>s5;
		int a,b,c;
		a=convert(s1);
		b=convert(s3);
		c=convert(s5);
		if(a<0){a=c-b;}
		if(b<0){b=c-a;}
		if(c<0){c=a+b;}
		cout<<a<<" + "<<b<<" = "<<c<<endl;
	}
	return 0;
}