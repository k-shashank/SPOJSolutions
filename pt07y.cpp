#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct adjacent
{
	int count;
	vector<int> v; 
};
typedef struct adjacent adj;

int visited[10001];
adj a[10001];

int dfs_visit(int n,int parent){
	if(visited[n]==1||visited[n]==2)return -1;
	visited[n]=1;
	int k;
	for (int i = 0; i < a[n].count; ++i)
	{
		if(visited[a[n].v[i]-1]==0){k=dfs_visit(a[n].v[i]-1,n);
			if(k==-1)return -1;}
		else if(a[n].v[i]-1!=parent)return -1;
	}
	visited[n]=2;
	return 0;
}

int dfs(int n){
	int k;
	for (int i = 0; i < n; ++i)
	{
		if(visited[i]==0){k=dfs_visit(i,-1);
			if(k==-1)return -1;}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int edge[m][2];
	for (int i = 0; i < n; ++i)
	{
		visited[i]=0;
		a[i].count=0;
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>edge[i][0]>>edge[i][1];
	}
	for (int i = 0; i < m; ++i)
	{
		a[edge[i][0]-1].v.push_back(edge[i][1]);
		a[edge[i][0]-1].count++;
		a[edge[i][1]-1].v.push_back(edge[i][0]);
		a[edge[i][1]-1].count++;
	}
	int k;
	k=dfs(n);
	int flag=0;
	if(k==-1)flag=1;
	for (int i = 0; i < n; ++i)
	{
		if(visited[i]==0){flag=1;
		break;}
	}
	if(flag==1)cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}