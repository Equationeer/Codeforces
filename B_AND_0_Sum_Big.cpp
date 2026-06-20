#include <bits/stdc++.h>
using namespace std;
 
long long findPowMod(long long a, long long b, long long m){
    if(b==0) return 1;
    if(b==1) return a;

    long long x = findPowMod(a,b/2,m);
    long long ans = 0;
    if(b%2==1){
        ans = ((x%m)*(x%m))%m;
        ans = ((ans%m)*(a%m))%m;
    }
    else{
        ans = ((x%m)*(x%m))%m;
    }
    return ans;
}

void solve(){
    long long n,k;
    cin>>n>>k;
    cout<<findPowMod(n,k,1000000007)<<"\n";
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}