#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while((t--)>0){
		long long int k;
		cin>>k;
		int flag=0;
		while(flag==0){
		stringstream str;
		str << k+1;
		string s;
		str >> s;
		int a=s.length();
		int i;
		for (i = 0; i < a/2; ++i)
		{
			if(s[i]!=s[a-i-1]){k++;
				break;}
		}
		if(i>=a/2){flag=1;
			cout<<k+1<<endl;}
	}
}

	return 0;
}