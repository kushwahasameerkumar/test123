#include<bits/stdc++.h>

using namespace std;

class Graph{
  int V;
  list<int> *adj;
  public:
    Graph(int v);
    void addEdge(int u, int v);
    void BFS(int s);
};

Graph::Graph(int v){
    this->V = v;
    adj = new list<int>[V];
}
void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void Graph::BFS(int s){
    cout<<"BFS: ";
    bool *visited = new bool[V];
    list<int>::iterator it;
    for(int i=0; i<V; ++i){
        visited[i] = false;
    }
    
    queue<int> q;
    q.push(s);
    visited[s] = true;
    
    while(!q.empty()){
        s=q.front();
        q.pop();
        cout<<s<<" ";
        
        for(it = adj[s].begin(); it != adj[s].end(); ++it){
            if(!visited[*it]){
                visited[*it] = true;
                q.push(*it);
            }
        }
    }
}

int main(){
    Graph G(8);
    G.addEdge(1,2);
    G.addEdge(1,0);
    G.addEdge(0,3);
    G.addEdge(3,4);
    G.addEdge(3,5);
    G.addEdge(4,5);
    G.addEdge(4,6);
    G.addEdge(5,7);
    G.addEdge(6,7);
    G.BFS(0);
    return 0;
}





---------------------------------------------------------------------------------------------------------------------------------------------



#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    
    public:
        Graph(int v){
            this->V = v;
            adj = new list<int>[V];
        }
        void edge(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void BFS(int s);
};
void Graph::BFS(int s){
    bool *visited = new bool [V];
    list<int>::iterator it;
    queue<int> q;
    
    q.push(s);
    visited[s] = true;
    
    while(!q.empty()){
        s = q.front();
        q.pop();
        cout<<s<<" ";
        
        for(it=adj[s].begin(); it!=adj[s].end(); ++it){
            if(!visited[*it]){
                q.push(*it);
                visited[*it] = true;
            }
        }
    }
}

int main() {
    Graph g(8);
    g.edge(1,2);
    g.edge(1,0);
    g.edge(0,3);
    g.edge(3,4);
    g.edge(4,5);
    g.edge(4,6);
    g.edge(5,7);
    g.edge(6,7);
    g.BFS(4);
    return 0;
}


---------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    
    public:
        Graph(int v){
            this->V = v;
            adj = new list<int>[V];
        }
        void edge(int u, int v){
            adj[u].push_back(v);
        }
        void DFS(int s);
};
void Graph::DFS(int s){
    bool *visited = new bool[V];
    for(int i=0; i<V; ++i){
        visited[i] = false;
    }
    
    list<int>:: iterator it;
    stack<int> st;
    
    st.push(s);
    visited[s]=true;
    
    cout<<s<<" ";
    
    while(!st.empty()){
        s = st.top();
        for(it=adj[s].begin(); it!=adj[s].end(); ++it){
            if(!visited[*it]){
                st.push(*it);
                visited[*it]=true;
                cout<<s<<" ";
                break;
            }
        }
        if(it!= adj[s].end()){
            continue;
        }else{
            st.pop();
        }
    }
}

int main() {
    Graph g(8);
    g.edge(1,2);
    g.edge(1,4);
    g.edge(1,7);
    g.edge(2,4);
    g.edge(2,3);
    g.edge(4,3);
    g.edge(7,4);
    g.edge(7,8);
    g.edge(8,4);
    g.edge(6,8);
    g.edge(6,5);
    g.DFS(1);
    return 0;
}

----------------------------------------------------------------------------------------------------