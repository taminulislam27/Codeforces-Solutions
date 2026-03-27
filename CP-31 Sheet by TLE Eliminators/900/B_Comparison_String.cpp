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
    int n; cin>>n; 
    string s; cin>>s; 
    int mx = 1, cur = 1; 
    for(int i = 1; i<n; i++){
        if(s[i] == s[i-1]) cur++; 
        else{
            mx = max(mx, cur); 
            cur = 1; 
        }
    }
    mx = max(mx, cur)+1; 
    cout<<mx<<endl; 
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