#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long int merge(long long int *,long long int,long long int,long long int );
long long int mergesort(long long int *a,long long int low,long long int high)
{
    long long int mid,count=0;
    if (low < high)
    {
        mid=(low+high)/2;
        count+=mergesort(a,low,mid);
        count+=mergesort(a,mid+1,high);
        count+=merge(a,low,high,mid);
    }
    return count;
}
long long int merge(long long int *a,long long int low,long long int high,long long int mid)
{
    long long int i, j, k, c[200000],count=0;
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
            count+=(mid+1-i);
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
    return count;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		long long int n;
		cin>>n;
		long long int a[n];
		for (int i = 0; i <n ; ++i)
		{
			cin>>a[i];
		}
		long long int count=mergesort(a,0,n-1);
		cout<<count<<endl;
	}
	return 0;
}