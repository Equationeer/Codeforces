#include <bits/stdc++.h>
using namespace std;

int CountUpper(string s){
    int upper = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z')
        upper++;
    }
    return upper;
}

int CountLower(string s){
    int lower = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
        lower++;
    }
    return lower;
}

int main() {
    string s;
    cin>>s;
    string ans = "";

    int upper = CountUpper(s);
    int lower = CountLower(s);

    if(upper>lower){
        for(int i=0;i<s.length();i++)
        s[i] = toupper(s[i]);
    }

    if(upper<=lower){
        for(int i=0;i<s.length();i++)
        s[i] = tolower(s[i]);
    }
    cout<<s;


    return 0;
}