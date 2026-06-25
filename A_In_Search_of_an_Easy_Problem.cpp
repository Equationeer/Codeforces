#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    bool flag = false;
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]==1){
            cout<<"HARD\n";
            flag = true;
            break;
        }
    }
    if(!flag){
    cout<<"EASY\n";
    }

    return 0;
}