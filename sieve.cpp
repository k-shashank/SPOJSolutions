#include <iostream>
#include <cmath>
using namespace std;

main()
{
	int t,n,m;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>m>>n;
		int d=n-m+1;
		bool sieve[d];
		int x=sqrt(n);
		bool prime[x+1];
		
		prime[0]=false;
		prime[1]=false;
		for (int i = 2; i < x+1; ++i)
		{
			prime[i]=true;
		}
		for (int i = 2; i < x+1; ++i)
		{
			if(prime[i]==true){
				for (int j = i*i; j < x+1; j=j+i)
				{
					prime[j]=false;
				}
			}
		}


		for (int i = 0; i < d; ++i)
		{
			sieve[i]=true;
		}
		if(m==1)sieve[0]=false;
		for (int i = 2; i < x+1; ++i)
		{
			if(prime[i]==true){
				int j=i;
				if(i>=m){j+=i;}
				else {j=m-(m%i);}
				while(j<n+1){
					if(j>=m){sieve[j-m]=false;}
					j+=i;
				}
			}
		}
		for (int i = 0; i < d; ++i)
		{
			if(sieve[i]==true){cout<<i+m<<endl;}
		}
	}
}
