#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int start = 0 , end = n-1;
    while(start<end){
        if(s[start]!=s[end]){
            int diff = abs(s[start]-s[end]);
            if(diff!=2){
                cout<<"NO\n";
                return;
            }
        }
        start++;
        end--;
    }
    cout<<"YES\n";
}
 
int main()
{
	 int t;
     cin>>t;
     while(t--){
        solve();
     }

	return 0;
}
 