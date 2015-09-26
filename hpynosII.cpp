#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
using namespace std;
typedef pair<int,int> mypair;
/*long long int StringToNumber(const string &Text)
{                               
	stringstream ss(Text);
	long long int result;
	return ss >> result ? result : 0;
}*/
int main(int argc, char const *argv[])
{
	char s[20];
	long long int t;
	gets(s);
	t=atoi(s);
	while(t-->0){
	long long int n,count=0,flag=0;
	gets(s);
	n=atoi(s);
	while(n!=1){
		long long int sum=0;
		while(n>0){
			sum+=(n%10)*(n%10);
			n/=10;
		}
		n=sum;
		count++;
		if(count>1000000){flag=1;
			break;}
	}
	if(flag==1)cout<<"-1\n";
	else cout<<count<<endl;}
	return 0;
}