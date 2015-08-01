/*
	link	:-	https://www.hackerearth.com/codestellar-5/algorithm/connections/
	problem	:-	Connections
*/
#include <iostream>
#include <list>
#include <queue>
using namespace std;
 
int graph[100+1][100+1];
list<int> adj[101];
void bfs(int V, int start, int end){
	bool *visited = new bool[V];
	int j;
    for(j = 0; j < V; j++)
        visited[j] = false;
    list<int> queue;
	queue.push_back(start);
	list<int>::iterator i;
	while(!queue.empty()){
		int s = queue.front();
		if(s==end){
			cout << "Indirect Connection" << endl;
			return;
		}
		queue.pop_front();
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
	}
	cout << "No Connection" << endl;
}
int main() {
	int t;
	cin >> t;
	int i,j;
	for(i=0;i<t+1;i++){
		for(j=0;j<t+1;j++){
			graph[i][j] = 0;
		}
		graph[i][i] = 1;
	}
	int n; cin >> n; int a,b;
	while(n--){
		cin >>a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int k; cin>>k;
	while(k--){
		cin >> a >> b;
		if(graph[a][b] == 1){
			cout << "Direct Connection" << endl;
		}
		else{
			bfs(t+1,a,b);
		}
	}
	return 0;
}
