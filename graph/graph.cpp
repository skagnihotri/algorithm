// #include <iostream>
// #include <unordered_map>
// #include <list>
#include<bits/stdc++.h>

using namespace std;

template <typename T>
class Graph{

	unordered_map<T,list<T> > AdjList;
public:
	Graph(){}

	void addEdge(T u,T v,bool birdir = true){

		AdjList[u].push_back(v);

		if(birdir){
			AdjList[v].push_back(u);
		}
	}

	void display(){
		for(auto node:AdjList){
			cout<<node.first<<" -> ";

			for(T vertex:node.second){
				cout<<vertex<<", ";
			}
			cout<<endl;
		}
	}

	void display_levelOrder(T u){
		queue<T> q;
		q.push(u);
		unordered_map<T,int> visited;
		visited[q.front()];
		while(!q.empty()){
			cout<<q.front()<<" ";
			for(auto var:AdjList[q.front()]){
				if (visited.find(var) == visited.end())
				{
					q.push(var);
					visited[var];	
				}
			}
			q.pop();
		}
	}

	// void display_DFSOrder(T u, unordered_map<T, int> &visited){

	// }
};

int main(){

	Graph<int> g;

	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(1,4);
	g.addEdge(3,4);
	g.addEdge(4,6);

	// g.display();

	// Graph<string> g;

	// g.addEdge("Coding Blocks","C++");
	// g.addEdge("C++","Java");
	// g.addEdge("Java","Python");
	// g.addEdge("Python","Coding Blocks");

	g.display();
	cout<<endl;
	g.display_levelOrder(1);

	return 0;
}