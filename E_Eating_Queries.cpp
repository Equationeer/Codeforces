
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
   int n,q;
   cin>>n>>q;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   reverse(arr.begin(),arr.end());

   for(int i=1;i<n;i++){
    arr[i]+=arr[i-1];
   }
   while(q--){
    int x;
    cin>>x;
    int lb = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    lb+=1;
    if(lb>n){
        cout<<"-1\n";
    }
    else{
        cout<<lb<<'\n';
    }
   }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
