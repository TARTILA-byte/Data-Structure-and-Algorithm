
#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>&arr,int n){
    int minIndex;
for(int i=0;i<n-1;i++){
    minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
           minIndex=j;
        }
    }
 swap(arr[i],arr[minIndex]);
}
}
int main(){
int n,x;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
    cin>>x;
    arr.push_back(x);
}
SelectionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<endl;
}

return 0;

}
