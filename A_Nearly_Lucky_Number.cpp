#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long count = 0;
    while(n){
        long long rem = n%10;
        if(rem==4 || rem == 7){
            count++;
        }
        n/=10;
    }
    if(count ==4 || count ==7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}