

// void merge(vector<int> &vec,int l,int mid,int j){
//     vector<int> temp;
//     int k = mid+1,i=l;
//     while(i<=mid && k<=j){
//     if(vec[i]<vec[k]){
//     temp.push_back(vec[i]);i++;
//     }else{
//     temp.push_back(vec[k]);k++;
//     }
//     }
//     while(i<=mid){
//     temp.push_back(vec[i]);i++;
//     }
//     while(k<=j){
//     temp.push_back(vec[k]);k++;
//     }
//     for(k=l;k<=j;k++){
//     vec[k] = temp[k-l];
//     }
// }

// void mergesort(vector<int> &vec,int i, int j){
//     if(i>=j){
//     return ;
//     }
//     int mid = i + (j-i)/2;
//     mergesort(vec,i,mid);
//     mergesort(vec,mid+1,j);
//     merge(vec,i,mid,j);
// }
