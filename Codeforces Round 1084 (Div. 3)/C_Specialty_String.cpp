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
    if(s.size() < 2)
    {
        no; return; 
    }
    for(auto c: s)
    {
        if(c == '*') s.erase(c); 
    }
    stack<char>st; 
    for(int i = 0; i<n; i++)
    {
        if(st.empty())
            st.push(s[i]); 
        else if(s[i] == st.top()) 
            st.pop(); 
        else st.push(s[i]); 
    }
    (st.size() > 0)? no: yes; 
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