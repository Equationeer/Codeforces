#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p,q;
    cin>>n;
    int count = 0;
    for(int i =0;i<n;i++){
        cin>>p>>q;
        int diff = abs(p-q);
        if(diff>1)
        count++;
    }
    cout<<count;

    return 0;
}