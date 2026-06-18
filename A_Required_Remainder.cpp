#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,n;
    cin>>x>>y>>n;
    int k = (n/x)*x;
    k+=y;
    if(k>n){
        k-=x;
    }
    cout<<k<<"\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}