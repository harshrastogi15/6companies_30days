#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int> 
#define f(A,B) for(int i=A;i<B;i++)

// void file(){
//     #ifndef ONLINE_JUDGE
//        freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
    
//     #endif    
// }

class graph{
        bool dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> & storedfs){
            vis[node] = 1;
            // cout<<node<<"\n";
            storedfs[node] = 1;
            for(auto it:adj[node]){
                if(!vis[it]){
                    // cout<<it<<"\n";
                    if(dfs(it,adj,vis ,storedfs ))return true;
                    // cout<<it<<"\n";
                }
                else if(storedfs[it] == 1){
                    // cout<<it<<"hello\n";
                    return 1;
                }
            }
            storedfs[node] = 0;
            return false;
        }
    public:
        bool dsfofgraph(vi adj[],int n){
            vector<int> vis(n+1,0);
            vector<int> storedfs(n+1,0);
            bool check;
            f(1,n){
                if(!vis[i])
                    if(dfs(i,adj,vis ,storedfs )) return true;
            }
            return false;
        }
};


int main(){
    // file();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // your code goes here
    int t,n;
    cin>>t>>n;
    vi vec(t,0);

    vi adj[t];
    f(0,n){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    graph s;
    bool check =s.dsfofgraph(adj,t);
    // cout<<check<<endl;
    cout<<check<<"\n";
    return 0;
}
