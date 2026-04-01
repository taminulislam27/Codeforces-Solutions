/*
        /\_/\.
       (= ._.)
       / >  \>
._____________________..
|                      |
|   Md_Taminul_Islam   |
|   CSE @ BU           |
|______________________|
*/#include<bits/stdc++.h>
using namespace std;
#define faster()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define for_i(a, b) for(int i = a; i < b; i++)
#define for_n(a, b) for(int i = a; i >= b; i--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    string s, t; 
    cin>>s>>t; 
    map<char, int>m; 
    for(auto ch: t) m[ch]++; 
    int i = s.size()-1; 
    int j = t.size()-1; 
    while(i >= 0){
        if(t.find(s[i]) != string::npos && m[s[i]] > 0){
            m[s[i]]--; j--; 
        } else{
            s[i] = '.'; 
        } i--; 
    }
    i = 0, j = 0; 
    while(i < s.size()){
        if(s[i] == '.'){
            i++; continue;
        } else if(s[i] == t[j]){
            j++; 
        } else{
            break; 
        } i++; 
    }
    // cout<<s<<" "<<t<<endl; 
    j < t.size()? no: yes; 
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        tamin();

    return 0;
}