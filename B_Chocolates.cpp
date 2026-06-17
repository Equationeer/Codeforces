#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum = arr[n-1];
    long long  mx = arr[n-1]-1;
    for(int i=n-2;i>=0;i--){
        sum+=min(mx,arr[i]);
        mx = min(mx,arr[i])-1;
        if(mx<=0){
            break;
        }
    }
    cout<<sum<<"\n";
	return 0;
}