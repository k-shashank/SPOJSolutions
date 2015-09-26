#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
#include <cmath>
using namespace std;
typedef pair<int,int> mypair;
int max(int a,int b){
	return (a>b)?a:b;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
	double a,b,c,d,s,area;
	cin>>a>>b>>c>>d;
	s=(a+b+c+d)/2;
	area=(s-a)*(s-b)*(s-c)*(s-d);
	area=sqrt(area);
	printf("%.2lf\n",area);}
	return 0;
}