

// Z array is of same length as string. An element Z[i] of Z array stores length of the longest substring starting from str[i] which is also a prefix of str[0..n-1]. The first entry of Z array is meaning less as complete string is always prefix of itself. 

// construction of Z array
// void solve(ll t){
//     string s;cin>>s;
//     int n = s.size();
//     vi(ll) z(n,0);
//     ll l = 0, r = 0;
//     f(i,1,n){
//         if(i>r){
//             l=r=i;
//             while(r<n && s[r]==s[r-l]){
//                 r++;
//             }
//             z[i]=r-l;
//             r--;
//         }else{
//             ll k = i-l;
//             if(z[k]<r-i+1){
//                 z[i]=z[k];
//             }else{
//                 l = i;
//                 while(r<n && s[r]==s[r-l]){r++;}
//                 z[i]=r-l;
//                 r--;
//             }
//         }
//     }
//     output(z);
// }   
