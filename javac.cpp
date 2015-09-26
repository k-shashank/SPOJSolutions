#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	char s[100];
	vector<char> t;
	while(scanf("%s",s)!=EOF){
		int l=0;
		while(s[l]!='\0')l++;
		if(s[0]<97||s[0]>122||s[l-1]=='_')cout<<"Error!\n";
		else{
			int flag=0;
			for (int i = 1; i < l; ++i)
			{
				if(s[i]=='_'){flag=1;
					break;}
				if(s[i]>64&&s[i]<91){flag=2;
					break;}
			}
			if(flag==1){
				int i=0,error=0,us=0;
				for (int i = 0; i <l; ++i)
				{
					if(s[i]=='_'&&us!=1){us=1;
						continue;}
					if((s[i]<97||s[i]>122)||(s[i]=='_'&&us==1)){error=1;
						break;}
					if(us==1){t.push_back(s[i]-32);
						us=0;
						continue;}
					if(s[i]>96&&s[i]<123)t.push_back(s[i]);
				}
				if(error==1){cout<<"Error!\n";
				t.clear();}
				else{for (int i = 0; i < t.size(); ++i)
				{
					cout<<t[i];
				}
				t.clear();
				cout<<endl;}
			}
			else if(flag==0){
				for (int i = 0; i < l; ++i)
				{
					cout<<s[i];
				}
				cout<<endl;
			}
			else{
				int error=0;
				for (int i = 0; i < l; ++i)
				{
					if(s[i]=='_'){error=1;
						break;}
					if(s[i]>64&&s[i]<91){
						t.push_back('_');
						t.push_back(s[i]+32);
						continue;}
					if(s[i]>96&&s[i]<123)t.push_back(s[i]);
				}
				if(error==1){cout<<"Error!\n";
				t.clear();}
				else{for (int i = 0; i < t.size(); ++i)
				{
					cout<<t[i];
				}
				t.clear();
				cout<<endl;}	
			}
		}
	}
	return 0;
}