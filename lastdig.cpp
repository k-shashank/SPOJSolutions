#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{int t;
cin>>t;
while(t-->0){long long int a,b;
cin>>a>>b;
if(b==0)cout<<"1\n";
else{if(a%10==2){if(b%4==0)cout<<"6\n";
if(b%4==1)cout<<"2\n";
if(b%4==2)cout<<"4\n";
if(b%4==3)cout<<"8\n";}
if(a%10==3||a%10==7){if(b%4==0)cout<<"1\n";
if(b%4==1)cout<<a%10<<endl;
if(b%4==2)cout<<(a*a)%10<<endl;
if(b%4==3)cout<<(a*a*a)%10<<endl;}
if(a%10==4||a%10==9){if(b%2==0)cout<<(a*a)%10<<endl;
if(b%2==1)cout<<a%10<<endl;}
if(a%10==5||a%10==6||a%10==0||a%10==1)cout<<a%10<<endl;
if(a%10==8){if(b%4==0)cout<<"6\n";
if(b%4==1)cout<<"8\n";
if(b%4==2)cout<<"4\n";
if(b%4==3)cout<<"2\n";}}}
return 0;}