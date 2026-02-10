#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> arr,int n,int key){
int low=0;
int high=n-1;
int mid;
while(low<=high){
 mid=(low+high)/2;

    if(arr[mid]==key){
      return 1;
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else{
        high=mid-1;
    }

}
 return 0;
}
int lowerbound(vector<int> arr,int n,int key){
    int low=0;
    int high=n-1;
    int mid;
    int ans=n;
while(low<=high){
    mid=(low+high)/2;


    if(arr[mid]>=key){
      ans=mid;
       high=mid-1;

    }
    else{

        low=mid+1;
    }

}
return ans;
}

int upperbound(vector<int> arr,int n,int key){
    int low=0;
    int high=n-1;
    int mid;
    int ans=n;
while(low<=high){
    mid=(low+high)/2;


    if(arr[mid]>key){
      ans=mid;
       high=mid-1;

    }
    else
        low=mid+1;


}
return ans;
}
int main(){
int n,key,x;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
    cin>>x;
    arr.push_back(x);
}
cin>>key;
int flag1=binarysearch(arr, n, key);
if(flag1==1){//in the binarysearch function return will be 1 which 1 is declear here flag1=1
    cout<<"Book found"<<endl;
}
else
    cout<<"Book not found";
int flag2=lowerbound(arr, n,key);
int flag3=upperbound(arr,n,key);
/*if(flag2&&flag3){

    cout<<"Lower Bound Index"<<flag2<<endl;
    cout<<"Upper bound Index"<<flag3;
}*/ //ai condition lagiye abhabe korle index jokhon 0 hoi tokhon ar kono kicu print hobe na ,fiag3/flag2 mane too hocce kono kicu achei tai 0 index a lower ba upper bound print hobe na tai condition na diye just print kore dite hobe
cout<<"Lower Bound Index"<<flag2<<endl;
    cout<<"Upper bound Index"<<flag3;
return 0;

}











