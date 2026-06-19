
#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
     }
     int m;
     cin>>m;
     while(m--){
        int q;
        cin>>q;
        int lb = lower_bound(arr.begin(),arr.end(),q)-arr.begin()+1;
        cout<<lb<<"\n";
     }

    return 0;
}
