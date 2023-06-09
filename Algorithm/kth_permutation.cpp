// class Solution
// {
// public:
//     string kthPermutation(int n, int k)
//     {
//         // code here
//         vector<int> vec;
//         string ans = "";
//         int fact = 1;
//         for (int i = 1; i < n; i++)
//         {
//             vec.push_back(i);
//             fact *= i;
//         }
//         vec.push_back(n);
//         k = k - 1;
//         while (1)
//         {
//             ans = ans + to_string(vec[k / fact]);
//             vec.erase(vec.begin() + k / fact);
//             if (vec.size() == 0)
//             {
//                 break;
//             }
//             k = k % fact;
//             fact = fact / vec.size();
//         }

//         return ans;
//     }
// };
