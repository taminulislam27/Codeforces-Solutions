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
    string s; cin>>s; 
    vector<int>digits; 
    int sm = 0, moves = 0; 
    for(auto c: s)
    {
        sm += c - '0'; 
        digits.push_back(c - '0'); 
    }
    if(sm < 10) 
    {
        cout<<0<<endl; 
        return; 
    }
    digits[0]--; 
    sort(rall(digits)); 
    for(int d: digits)
    {
        sm -= d; 
        moves++; 
        if(sm < 10) break; 
    }
    cout<<moves<<endl; 
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