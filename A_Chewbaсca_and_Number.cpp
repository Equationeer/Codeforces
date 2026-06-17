#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n;
    cin>>n;
    
    vector<long long>ans;
    while(n){
       int rem = n%10;
       if(rem>4){
        rem = 9-rem;
       }
       ans.push_back(rem);
       n/=10;
     }
     if(ans.back()==0){
        ans.back() = 9;
     }
     reverse(ans.begin(),ans.end());
     for(int digit:ans){
        cout<<digit;
     }

	return 0;
}
 