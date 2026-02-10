#include<bits/stdc++.h>
using namespace std;
void Inserting_sort(vector<int>&arr,int n){
for(int i=0;i<n;i++){
   int key = arr[i];
  int j=i-1;
  while(j>=0&&arr[j]>key){
    arr[j+1]=arr[j];
    j--;
  }
  arr[j+1]=key;
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
Inserting_sort(arr, n);
for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<endl;
}
return 0;
}
