#include <bits/stdc++.h>
using namespace std;

bool CheckPrimes(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
int main() {
   int n;
   cin>>n;
   if(CheckPrimes(n-2)){
    cout<<"2"<<" "<<n-2<<"\n";
   }
   else{
    cout<<"-1\n";
   }
    return 0;
}