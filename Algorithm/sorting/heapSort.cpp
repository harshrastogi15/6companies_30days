
// class Solution
// {
//     public:
//     //Heapify function to maintain heap property.
//     void heapify(int arr[], int n, int i)
//     {
//       // Your Code Here
//       int l = 2*i+1;
//       int r = 2*i+2;
//       int largest = i;
//       if(l<n && arr[l]>arr[largest]){
//           largest = l;
//       }
//       if(r<n && arr[r]>arr[largest]){
//           largest = r;
//       }
//       if(largest!=i){
//           swap(arr[i],arr[largest]);
//           heapify(arr,n,largest);
//       }
//     }

//     public:
//     //Function to sort an array using Heap Sort.
//     void heapSort(int arr[], int n)
//     {
//         //code here
//         for(int i=n/2-1;i>=0;i--){
//             heapify(arr,n,i);
//         }

//         for(int i=n-1;i>=0;i--){
//             swap(arr[i],arr[0]);
//             heapify(arr,i,0);
//         }
//     }
// };
