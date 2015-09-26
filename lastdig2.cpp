#include <iostream>
#include <string>
using namespace std;
int main()
{long long int t,b;
cin>>t;
while(t-->0){string s1;
cin>>s1;
cin>>b;
int a=s1[s1.length()-1]-'0';
if(b==0)cout<<"1";
else{if(a==2){if(b%4==0)cout<<"6";
if(b%4==1)cout<<"2";
if(b%4==2)cout<<"4";
if(b%4==3)cout<<"8";}
if(a==3||a==7){if(b%4==0)cout<<"1";
if(b%4==1)cout<<a;
if(b%4==2)cout<<(a*a)%10;
if(b%4==3)cout<<(a*a*a)%10;}
if(a==4||a==9){if(b%2==0)cout<<(a*a)%10;
if(b%2==1)cout<<a;}
if(a==5||a==6||a==0||a==1)cout<<a;
if(a==8){if(b%4==0)cout<<"6";
if(b%4==1)cout<<"8";
if(b%4==2)cout<<"4";
if(b%4==3)cout<<"2";}}
cout<<endl;}
return 0;}