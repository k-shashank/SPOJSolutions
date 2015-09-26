#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,d;
	cin>>a>>d;
	while(a!=0&&d!=0){
		int mina=10000,mind1=10000,mind2=10000,b,c;
		for (int i = 0; i < a; ++i)
		{
			cin>>b;
			if(i==0)mina=b;
			else {
			if(b<mina)mina=b;}
		}
		for (int i = 0; i < d; ++i)
		{
			cin>>c;
			if(i==0)mind1=c;
			else {
			if(c<=mind1){
				mind2=mind1;
				mind1=c;
			}
			else if(c>mind1&&c<=mind2){
				mind2=c;
			}}
		}
		if(mina<mind2)cout<<"Y\n";
		else cout<<"N\n";
		cin>>a>>d;
	}
	return 0;
}