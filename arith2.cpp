#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		long long int a=0,b=0;
		for (int i = 0; i < s1.length(); ++i)
		{
			a=a*10+(s1[i]-'0');
		}
		for (int i = 0; i < s3.length(); ++i)
		{
			b=b*10+(s3[i]-'0');
		}
		if(s2=="+")a+=b;
		if(s2=="-")a-=b;
		if(s2=="*")a*=b;
		if(s2=="/")a/=b;
		cin>>s2;
		while(s2!="="){
		cin>>s3;
		b=0;
		for (int i = 0; i < s3.length(); ++i)
		{
			b=b*10+(s3[i]-'0');
		}
		if(s2=="+")a+=b;
		if(s2=="-")a-=b;
		if(s2=="*")a*=b;
		if(s2=="/")a/=b;
		cin>>s2;
		}
		cout<<a<<endl;
	}
	return 0;
}