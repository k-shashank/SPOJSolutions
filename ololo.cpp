#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
using namespace std;
typedef pair<int,int> mypair;
int main(int argc, char const *argv[])
{
	long long int n,result=0,a;
	scanf("%lld",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld",&a);
		result=result^a;
	}
	printf("%lld\n",result);
	return 0;
}