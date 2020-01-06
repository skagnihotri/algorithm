#include <bits/stdc++.h>
using namespace std;

class graph
{
	map<int, list<int>> adjlist;
	int v;
public:
	
	graph(int v){
		this->v = v;
	}

	void addEdge(int u, int v){
		adjlist[u].push_back(v);
		adjlist[v].push_back(u);
	}

	void bfs(int src){
		queue<int> q;
		map<int, int> dist;

		for(int i= 1; i <= this->v; i++){
			dist[i] = -1;
		}

		dist[src] = 0;
		q.push(src);

		while(!q.empty()){
			int temp = q.front();
			q.pop();
			for(auto i : adjlist[temp]){

				if (dist[i] == -1){
					q.push(i);
					dist[i] = dist[temp] + 6;
					// cout<<dist[i]<<" ";
				}
			}
		}

		for(auto i:dist){

			if (i.first == src){
				continue;
			}
			cout<<i.second<<" ";
		}
		cout<<endl;
	}
};

int main()
{	
	int q;
	cin>>q;

	while(q--){
		int v,e;
		cin>>v>>e;
		graph g(v);
		while(e--){
			int u,v;
			cin>>u>>v;
			g.addEdge(u,v);
		}
		int src;
		cin>>src;
		g.bfs(src);
	}

	return 0;
}