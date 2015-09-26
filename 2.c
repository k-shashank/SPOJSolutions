#include<stdio.h>
#include<math.h>
#define MAX 1000000000

int sieve(int n)
{int i;
if(n==1) return 0;
  if(n>3&&(n%2)==0) return 0;
  for(i=3;i*i<=n;i=i+2)
    {if(n%i==0){return 0;}}
  return 1;
}

main()
{int n,i,j,k,l;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d %d",&j,&k);
for(l=j;l<k;l++)
{if(sieve(l)==1){printf("%d\n",l);}}}
}
