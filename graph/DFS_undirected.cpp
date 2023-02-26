#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int> 
#define f(a,b) for(int i=a;i<b;i++)
// void file(){
//     #ifndef ONLINE_JUDGE
//        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
    
//     #endif    
// }

class graph{
        void dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> & storedfs){
            storedfs.push_back(node);
            vis[node] = 1;
            for(auto it:adj[node]){
                if(!vis[it])
                    dfs(it,adj,vis ,storedfs );
            }
        }
    public:
        vi dsfofgraph(vi adj[],int n){
            vector<int> vis(n+1,0);
            vector<int> storedfs;
            dfs(0,adj,vis ,storedfs );
            return storedfs;

        }
};



int main(){
    // file();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // your code goes here
    int n,m;
    cin>>n>>m;
    vi adj[n];
    f(0,m){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    graph s;
    vi arr=s.dsfofgraph(adj,n);

    for(auto i: arr){
        cout<<i<<" ";
    }
   return 0;
}