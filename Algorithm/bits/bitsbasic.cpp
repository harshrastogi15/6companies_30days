// n & (n-1) clear last set bit -> BrianKreningam Algo

// 23 - 10111
// 22 - 10110
// 21 - 10101
// 16 - 10000
// 15 - 01111
// 17 - 10001

// arr[] = {5,4,3,9,7,4,9,3}
// find two numbers that are present odd number of time

// XOR = 2 - 0010
// find right most set bit XOR & ~(XOR-1)

// perform & with this. and if 0 then put in stack. if non zero put then in another stack. by these two stack we get two numbers


// void solve(ll t){
//     cin>>n;
//     ll XOR = 0;
//     vi(ll) vec(n,0);
//     f(i,0,n){cin>>vec[i];XOR^=vec[i];}

//     ll rXOR = XOR& ~(XOR-1);
//     ll zero=0,nonzero=0;
//     f(i,0,n){
//         if(vec[i]&rXOR){
//             nonzero ^=vec[i];
//         }else{
//             zero ^= vec[i];
//         }
//     }
//     cout<<rXOR<<"\n";
//     cout<<zero<<" "<<nonzero<<"\n";
// }   



