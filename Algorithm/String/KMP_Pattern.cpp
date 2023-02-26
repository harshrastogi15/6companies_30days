// Harsh Rastogi

// first find lps array of pattern then use kmp algorithm for text and pattern
// text = abababaaba
// pattern = abab

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
    string s2;cin>>s2;
    int n = s.size();
    int m = s2.size();
    vi(ll) lps(s2.size(),0);
    ll j;
    f(i,1,s2.size()){
        j = lps[i-1];
        while(j>0 && s2[i]!=s2[j]){
            j = lps[j-1];
        }
        if(s2[i]==s2[j]){
            lps[i]=++j;
        }
    }

    output(lps);

    vi(ll) lps2(n,0);
    ll i = 0;
    j =0;
    vi(ll) ans;
    while(i<n){

        while(j>0 && s[i]!=s2[j]){
            j = lps[j-1];
        }

        if(s[i]==s2[j]){
            j++;
        }
        // cout<<j<<" ";
        if(m==j){
            // cout<<"hello\n";
            ans.push_back(i-j+1);
            j = lps[j-1];
        }
        i++;
    }
    // cout<<"\n";
    output(ans);

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
