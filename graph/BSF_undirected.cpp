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
    public:
        vi bsfofgraph(vi adj[],int n){
            vi vis(n,0);
            vi arr;
            f(0,n){
                if(! vis[i]){
                    queue<int> q;
                    q.push(i);
                    vis[i]=1;
                    while(!q.empty()){
                        int node = q.front();
                        q.pop();
                        arr.push_back(node);
                        for(auto it : adj[node]){
                            if(! vis[it]){
                                q.push(it);
                                vis[it]=1;
                            }
                        }
                    }
                }
            }
            return arr;
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
        // adj[y].push_back(x);
    }
    graph s;
    vi arr=s.bsfofgraph(adj,n);

    for(auto i: arr){
        cout<<i<<" ";
    }
   return 0;
}