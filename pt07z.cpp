#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
struct adjacent
{
	int count;
	vector<int> v; 
};
typedef struct adjacent adj;

int visited[10000],dist[10000];
adj a[10000];

int dfs_visit(int n,int parent,int d){
	if(visited[n]==1||visited[n]==2)return -1;
	visited[n]=1;
	dist[n]=d;
	int k;
	for (int i = 0; i < a[n].count; ++i)
	{
		if(visited[a[n].v[i]-1]==0){k=dfs_visit(a[n].v[i]-1,n,d+1);
			if(k==-1)return -1;}
		else if(a[n].v[i]-1!=parent)return -1;
	}
	visited[n]=2;
	return 0;
}

/*int dfs(int n,int d){
	int k;
	for (int i = 0; i < n; ++i)
	{
		if(visited[i]==0){k=dfs_visit(i,-1,d);
			if(k==-1)return -1;}
	}
	return 0;
}*/

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int edge[n-1][2];
	for (int i = 0; i < n; ++i)
	{
		visited[i]=0;
		a[i].count=0;
	}
	for (int i = 0; i < n-1; ++i)
	{
		cin>>edge[i][0]>>edge[i][1];
	}
	for (int i = 0; i < n-1; ++i)
	{
		a[edge[i][0]-1].v.push_back(edge[i][1]);
		a[edge[i][0]-1].count++;
		a[edge[i][1]-1].v.push_back(edge[i][0]);
		a[edge[i][1]-1].count++;
	}
	dist[0]=0;
	int k=dfs_visit(0,-1,0);
	int node=0;
	for (int i = 0; i < n; ++i)
	{
		if(dist[i]>dist[node])node=i;
	}
	for (int i = 0; i < n; ++i)
	{
		visited[i]=0;
	}
	k=dfs_visit(node,-1,0);
	sort(dist,dist+n);
	cout<<dist[n-1]<<endl;
	return 0;
}