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
		double a_b,a_c,a_d,b_c,b_d,c_d;
		cin>>a_b>>a_c>>a_d>>b_c>>b_d>>c_d;
		double u=a_b;
		double U=c_d;
		double v=b_c;
		double V=a_d;
		double w=b_d;
		double W=a_c; 
		double uu=(v*v)+(w*w)-(U*U);
		double vv=(w*w)+(u*u)-(V*V);
		double ww=(u*u)+(v*v)-(W*W);
		double vol=(4*u*u*v*v*w*w)-(u*u*uu*uu)-(v*v*vv*vv)-(w*w*ww*ww)+(uu*vv*ww);
		double volume=(sqrt(vol))/12;
		printf("%.4lf\n",volume);
	}
	return 0;
}