#include<iostream>
#include<cmath>
using namespace std;

void sieve(bool *x,int n)
{int i,j;
  for(i=2;i<=sqrt(n);i++)
    {if(x[i-2]==true)
	{for(j=i*i;j<=n;j=j+i)
	    {x[j-2]=false;}}
    }
}

main()
  {int a,m,n,i,j;
    bool *x;
    cin>>a;
    for(i=0;i<a;i++)
      {cin>>m;
	cin>>n;
	x=new bool[n];
	for(j=0;j<n;j++)
	  {x[j]=true;}
	sieve(x,n);
	for(j=m;j<=n;j++)
	  {if(j==1)j++;
	    if(x[j-2]==true) cout<<j<<"\n";}
      }
  }
