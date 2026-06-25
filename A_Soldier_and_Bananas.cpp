#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int i=1,ans=0;
    while(w>0){
       n-=(i*k);
       i++;
       w--;
    }
    if(n>0)
    cout<<"0";
    else
    cout<<abs(n);

    return 0;
}