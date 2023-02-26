// Harsh Rastogi
// KMP Alogrith 
// for finding longest prefix string that was suffix of string or not
// AABAACAABAA
// 01012012345



#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define vi(T) vector<T>  
#define pr(i,j) pair<i,j>
#define all(vec) vec.begin(), vec.end() 
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define f(i,A,B) for(long long i=A;i<B;i++)
#define M 1000000007

// output
#define input(vec) for(auto &i:vec)cin>>i
#define output(vec) for(auto &i:vec){cout<<i<<" ";}cout<<"\n"
#define outputpair1(vec) for(auto &i:vec){cout<<"{"<<i.first<<" "<<i.second<<"} ";}cout<<"\n"
#define outputpair2(vec) for(auto &i:vec){cout<<i.first<<" "<<i.second<<"\n";}
#define google(i) cout<<"Case #"<<i<<": "

// Function
ll gcd(ll a, ll b){if (a == 0){return b;} return gcd(b % a, a);}
ll power(ll a,ll b){
    //a ki power b
    ll ans=1;ll mul=a;
    while(b>0){if(b&1){ans *= mul;}mul = mul*mul;b>>=1;}
    return ans;
}
unsigned ll SetBits(unsigned ll n){
    unsigned ll count = 0;
    while (n) {count += n & 1;n >>= 1;}
    return count;
}

// Code start 
const ll N = 1e5;
ll n,m,k,num;
ll a,b,c,d;
string s;

void solve(ll t){
    cin>>s;
    n = s.size();
    vi(ll) vec(n,0);
    f(i,1,n){
        ll j = vec[i-1];
        while(j>0 && s[i]!=s[j]){
            j = vec[j-1];
        }
        if(s[i]==s[j]){
            vec[i] = j+1;
        }
    }

    output(vec);
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // your code goes here
    ll t=1;
    cin>>t;
    // while(t--)solve();
    ll i=0;
    f(i,0,t){
        solve(i+1);
    }
    return 0;
}
