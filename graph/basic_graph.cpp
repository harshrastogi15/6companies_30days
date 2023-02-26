// graph using adjacency list

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

    f(0,n){
        cout<<i<<" - ";
        for(auto j : adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   return 0;
}