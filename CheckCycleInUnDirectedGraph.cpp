                                /* Detect cycle in an undirected graph. */
                                @author - Ravi Agarwal
    
#include<bits/stdc++.h>
using namespace std;
bool isCycleUtil(int curr, bool vis[], int parent, vector<int> adj[]){
    vis[curr]=true;
    for(int i=0;i<adj[curr].size();i++){
        int vertex = adj[curr][i];
        if(vertex!=parent){
            if(vis[vertex])
                return true;
            else{
                if (isCycleUtil(vertex, vis, curr, adj)) {
                    return true;
            }
        }
    }
  }
return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
    bool vis[V] = {false};
    for (int i = 0; i <V ; i++) {
        if(vis[i]==false){
            if(isCycleUtil(i, vis, -1, adj)){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << isCyclic(adj, V)<<endl;
    }
}
