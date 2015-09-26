#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#define PI 3.1415926
using namespace std;
int main(int argc, char const *argv[])
{
	float n;
	cin>>n;
	while(n!=0){
		float area=(n*n)/(2*PI);
		printf("%.2f\n",area);
		cin>>n;
	}
	return 0;
}