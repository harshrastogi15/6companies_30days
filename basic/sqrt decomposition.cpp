#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<long long> 
void file(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    
    #endif    
}




int main(){
   file();
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // your code goes here
   ll n,q;
   cin>>n>>q;
   vi nums(n,0);
   ll len = sqrt(n)+1;
   vi b(len,0);
   // for(auto & i: nums){
   //    cin>>i;
   // } 
   for(auto i=0;i<n;i++){
         cin>>nums[i];
         b[i/len]+=nums[i];
   }
   while(q--){
      ll x,y;
      cin>>x>>y;
      x--;y--;
      ll sum=0;
      ll c_x =x/len;
      ll c_y=y/len;

      if(c_x==c_y){
         for(int i = x; i<=y ; i++)
            sum += nums[i];
      }else{
         for(int i=x,end = (c_x+1)*len-1;i<=end;i++)
            sum += nums[i];
         for(int i=c_x+1;i<=c_y-1;i++)
            sum += b[i];
         for(int i= (c_y*len);i<=y;i++)
            sum+= nums[i];
      }
      cout<<sum<<"\n";
   }
   return 0;
}