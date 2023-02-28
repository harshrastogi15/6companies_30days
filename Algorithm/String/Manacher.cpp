// Create array and interval [left , right]
// s[i] is center of palindrome and size of the palindrome of max length is store in array.
// As we know that left side of s[i] is mirror of right side of s[i]. as we already calculate 
// left side so we simply copy values from left side.
// At any index if we found value that is touching right side will be traverse for more long palindrome
// for odd length

// Harsh Rastogi

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
ll gcd(ll a, ll b) {if (a == 0) {return b;} return gcd(b % a, a);}
ll power(ll a, ll b) {
    //a ki power b
    ll ans = 1; ll mul = a;
    while (b > 0) {if (b & 1) {ans *= mul;} mul = mul * mul; b >>= 1;}
    return ans;
}
unsigned ll SetBits(unsigned ll n) {
    unsigned ll count = 0;
    while (n) {count += n & 1; n >>= 1;}
    return count;
}

// Code start
const ll N = 1e5;
ll n, m, k, num;
ll a, b, c, d;
string s;

void solve(ll t) {

    // this algo is for odd length
    // for even length we have to add one symbol to string at every position like
    // abcs --> #ab#c#s#
    // now at each position we use vec[i]-(vec[i]/2 +1) give the right answer
    cin >> s;
    n = s.size();
    vi(ll) vec(n, 1);
    ll l = 0, r = 0;
    f(i, 0, n) {
        if (i > r) {
            l = r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--; r++;
            }
            l++;
            vec[i] = r - l;
            r--;
            // cout<<l<<" "<<r<<"\n";
        }
        else {
            // cout<<r-i+
            // left and right are mirror
            vec[i] = min(vec[r-i+l],(r-i)*2+1);
            // if it is touching right side of interval
            if (abs((vec[i]-1)/2 + i) >= r) {
                l = r-vec[i]+1;
                // cout<<i<<" "<<l<<"\n";
                while (l >= 0 && r < n && s[l] == s[r]) {
                    l--; r++;
                }

                l++;
                vec[i] = r - l;
                r--;
            }
        }
    }

    output(vec);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // your code goes here
    ll t = 1;
    cin >> t;
    // while(t--)solve();
    ll i = 0;
    f(i, 0, t) {
        solve(i + 1);
    }
    return 0;
}
