#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int max(int x,int y){
	if(x<y)return y;
	else return x;
}
int main(int argc, char const *argv[])
{
	int g,b;
	cin>>g>>b;
	while(g!=-1&&b!=-1){
		if(g==0)cout<<b<<endl;
		else if(b==0)cout<<g<<endl;
		else{
		int count=0,x,y;
		x=g/(b+1);
		y=b/(g+1);
		if(g%(b+1)!=0)x++;
		if(b%(g+1)!=0)y++;
		count=max(x,y);
		cout<<count<<endl;
		}
		cin>>g>>b;
	}
	return 0;
}