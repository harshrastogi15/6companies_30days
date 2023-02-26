#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<long long> 
#define mp unordered_map<long long,long long>
#define f(A,B) for(int i=A;i<B;i++)

void file(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    
    #endif    
}

void build(vector<ll>& t, vector<ll>& a, ll v, ll tl, ll tr){
    if(tl == tr)
        t[v] = a[tl];
    else{
        ll tm = tl + (tr-tl)/2;

        build(t, a, 2*v, tl, tm);
        build(t, a, 2*v+1, tm+1, tr);

        t[v] = t[2*v] + t[2*v+1];
    }
}

ll getSum(vector<ll>& t, ll v, ll tl, ll tr, ll l, ll r){
    if(l > r)
        return 0;
    
    if(l == tl && r == tr)
        return t[v];
    
    ll tm = tl + (tr-tl)/2;

    return getSum(t, 2*v, tl, tm, l, min(tm, r)) + getSum(t, 2*v+1, tm+1, tr, max(l, tm+1), r);
}

void solve2(){
    ll n,q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i<n ; i++)
        cin >> a[i];
    
    vector<ll> t(4*n);
    build(t, a, 1, 0, n-1);

    while(q--){
        ll l,r;
        cin >> l >> r;
        l--;   r--;

        cout << getSum(t, 1, 0, n-1, l, r) << endl;
    }

}

int main(){
    file();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve2();   // Segment tree
    
    return 0;
}