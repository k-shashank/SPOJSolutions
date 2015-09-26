#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <map>
#include <cmath>
using namespace std;
typedef pair<int,int> mypair;
int max(int a,int b){
	return (a>b)?a:b;
}
int min(int a,int b){
	return (a<b)?a:b;
}
/*int calculate(int x,int y,int* a){
	int max1=a[x],sum=a[x];
	for (int i = x+1; i <= y; ++i)
	{
		sum=max(a[i],sum+a[i]);
		if(sum>max1)max1=sum;
	}
	return max1;
}
int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	while(m-->0){
		int x,y,max1,sum;
		scanf("%d %d",&x,&y);
		max1=0;
		sum=0;
		for (int i = x-1; i < y; ++i)
		{
			sum=max(a[i],sum+a[i]);
			if(sum>max1)max1=sum;
		}
		printf("%d\n",max1);
	}
	else{
	int dp[n][n];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			dp[i][j]=calculate(i,j,a);
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}
	scanf("%d",&m);
	while(m-->0){
		int x,y;
		scanf("%d %d",&x,&y);
		printf("%d\n",dp[x-1][y-1]);
	}}
	return 0;
}*/
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) {  return s + (e -s)/2;  }

int getSumUtil(int *st, int ss, int se, int qs, int qe, int index)
{
    // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qs <= ss && qe >= se)
        return st[index];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*index+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*index+2);
}

void updateValueUtil(int *st, int ss, int se, int i, int diff, int index)
{
    // Base Case: If the input index lies outside the range of this segment
    if (i < ss || i > se)
        return;
 
    // If the input index is in range of this node, then update the value
    // of the node and its children
    st[index] = st[index] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*index + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*index + 2);
    }
}

void updateValue(int arr[], int *st, int n, int i, int new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }
 
    // Get the difference between new value and old value
    int diff = new_val - arr[i];
 
    // Update the value in array
    arr[i] = new_val;
 
    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
 
// Return sum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses getSumUtil()
int getSum(int *st, int n, int qs, int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        //cout<<st[si]<<" "<<ss<<" "<<se<<endl;
        return st[si];
    }
    int mid = getMid(ss, se);
    int a,b;
    a=constructSTUtil(arr, ss, mid, st, si*2+1);
    b=constructSTUtil(arr, mid+1, se, st, si*2+2);
    st[si] =  max(a+b,max(a,b));
    //cout<<st[si]<<" "<<ss<<" "<<se<<endl;
    return st[si];
}

int *constructST(int arr[], int n)
{
    // Allocate memory for segment tree
    int x = (int)(ceil(log2(n))); //Height of segment tree
    int max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    int *st = new int[max_size];

    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
 
// Driver program to test above functions
int main()
{
	int n,m;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
    // Build segment tree from given array
    int *st = constructST(a, n);

    scanf("%d",&m);
    while(m-->0){
    	int x,y;
		scanf("%d %d",&x,&y);
		printf("%d\n",getSum(st,n,x-1,y-1));
    }
    return 0;
}