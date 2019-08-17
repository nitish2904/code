#include<iostream>
using namespace std;

bool dfsCycle(int s,vector<int> adj[],bool visited[],int parent){
	if(!visited[s])
		visited[s]=true;
	for(int i=0;i<adj[s].size();i++){
		if(!visited[adj[s][i]])
			if(dfsCycle(adj[s][i],adj[],visited,s))
				return true;

		else(adj[s][i]!=parent)
			return true;

	}
	return false;
}
void iscyclic(vector<int> adj[],int V){
	bool visited[V];
	memset(visited,0,sizeof(visited));
	int count =0 ;
	for(int i=0;i<n;i++){
		if(!visited[i])
			if(dfsCycle(i,adj,visited,-1))
					count++;
	}
	if(count>0)
			return true;
	else
		return false;
}