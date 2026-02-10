#include<bits/stdc++.h>
using namespace std;
vector <int> arr;
int main(){
int n,i,x;
cin>>n;
for(i=0;i<n;i++){
 cin>>x;
 arr.push_back(x);
}
for(i=0;i<n;i++){
    cout<<endl<<arr[i];
}

return 0;
}
