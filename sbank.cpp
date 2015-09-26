#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
using namespace std;
typedef pair<int,int> mypair;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t-->0){
		int n;
		char dummy,a[33];
		scanf("%d%c",&n,&dummy);
		map<string,int> accounts;
		for (int i = 0; i < n; ++i)
		{
			gets(a);
			string s(a);
			accounts[s]++;
		}
		map<string,int>::iterator it;
		for (it=accounts.begin();it!=accounts.end(); ++it)
		{
			printf("%s %d\n",it->first.c_str(),it->second);
		}
		printf("\n");
	}
	return 0;
}