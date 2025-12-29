
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main(){
int i,n,x,k;
int flag=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>x;
    arr.push_back(x);
}
cin>>k;

for(i=0;i<n;i++){
    if(arr[i]==k){
        flag=1;
    }
}

if(flag==1){
    cout<<"yes";
}

else{
    cout<<"no";
}


return 0;
}
