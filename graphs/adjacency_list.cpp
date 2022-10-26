#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,m=6;            //n=nodes, m=edges, can also be V & E
    // cin >> n >> m;
    vector<int> adj[n+1]; 
    cout << "entering loop\n";
    for(int i=1;i<=m;i++){
        int u, v;
        cin >> u;
        cin >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cout << "value of i is : " << i << "\n";
    }
    for(int i=0;i<m;i++){
        for(int x: adj[i]){
            cout << i << "\t" << x << " ";
        }
        cout << "\n";
    }
    return 0;
}