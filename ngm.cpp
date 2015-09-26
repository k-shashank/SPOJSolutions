#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int l=s.length();
	if(s[l-1]=='0')cout<<"2\n";
	else{
	cout<<"1\n";
	cout<<s[l-1]<<endl;}
	return 0;
}