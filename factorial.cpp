#include<iostream>
using namespace std;
int array[1000],array1[1000],array2[1000];

void factorial(int n)
{if(n==1) return;
int i,carry,a,b,c,x,y;
carry=0;
{x=n%10;
y=(n-x)/10;
for(i=0;i<1000;i++)
{a=array1[i]*x;
a=a+carry;
c=a%10;
carry=(a-c)/10;
array1[i]=c;}
carry=0;
for(i=0;i<1000;i++)
{a=array2[i]*y;
a=a+carry;
c=a%10;
carry=(a-c)/10;
array2[i]=c;}
array[0]=array1[0];
for(i=1;i<999;i++)
{array[i]=array1[i]+array2[i-1];}
for(i=0;i<1000;i++)
{array1[i]=array[i];
array2[i]=array[i];}
}
factorial(n-1);}

main()
{
int t;
cin>>t;
while(t-->0){
int i,j,k;
array[0]=1;
array1[0]=1;
array2[0]=1;
for(i=1;i<1000;i++)
{array[i]=0;
array1[i]=0;
array2[i]=0;}
//cout<<"Enter the number for which the factorial is required.\n";
cin>>j;
if(j==1)cout<<"1\n";
else if(j==2)cout<<"2\n";
else if(j==3)cout<<"6\n";
else if(j==4)cout<<"24\n";
else{
factorial(j);
//cout<<"The factorial of the given number is:\n";
while(array[i]==0)
{i--;}
for(k=i;k>=0;k--)
{cout<<array[k];}
cout<<"\n";}}
//cout<<"The number of digits in the factorial: "<<i+1<<"\n";
}