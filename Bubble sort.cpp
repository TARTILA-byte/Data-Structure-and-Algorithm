#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&arr,int n){
for(int i=0;i<n-1;i++){//control the number of passes

    for(int j=0;j<n-i-1;j++){//for compair
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }

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

BubbleSort(arr,n);

for(int i=0;i<n;i++){

    cout<<arr[i];
    cout<<endl;
}
return 0;





}
