#include<bits/stdc++.h>
using namespace std;
int binarysearch(int n,int key,vector <int>arr){
int low=0;
int high=n-1;
int mid;
while(low<=high){
 mid=(low+high)/2;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return 1;
    }
    else if(arr[i]<key){
        low=mid+1;
    }
    else{
        high=mid-1;
    }

}
}
return 0;
}

int main(){


int i,n,x,key;
cin>>n;
vector<int>arr;
for(i=0;i<n;i++){
    cin>>x;
    arr.push_back(x);
}
cin>>key;
int flag=binarysearch(n,key,arr);
if(flag){
    cout<<"Key found";
}
else{
    cout<<"key not found";
}


}
