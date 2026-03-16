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
    set<int>s; 
    map<int, int>m; 
    for(int i  = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            int x; cin>>x; 
            m[x]++; 
        }
    }
    bool notBingo = false; 
    for(auto x: m)
    {
        if(x.second > n*(n-1)) notBingo = true; 
    }
    (!notBingo)? yes: no; 
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