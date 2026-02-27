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
    vector<int>a(n); 
    int idx = -1, tmp = 0; 
    for(int i = 0; i<n; i++) 
    {
        cin>>a[i];
        if(a[i] == n) 
        {
            idx = i, tmp = a[i];
            // break; 
        } 
    } 
    a[idx] = a[0]; 
    a[0] = tmp; 
    for(auto x: a) cout<<x<<" "; nl; 
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