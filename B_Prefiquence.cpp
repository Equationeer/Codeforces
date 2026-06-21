#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;

    int start = 0 ,start2 = 0;

    while(start<n && start2<m){
        if(a[start]==b[start2]){
            start++;
            start2++;
        }
        else{
            start2++;
        }
    }
    cout<<start<<"\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}