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
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n, s, x, sm = 0; 
    cin>>n>>s>>x; 
    vector<int>a(n); 
    for(int i = 0; i<n; i++) cin>>a[i], sm += a[i]; 
    if(sm>s) no;
    else if(sm == s) yes;
    else
    {
        s -= sm; 
        (s%x == 0)? yes: no; return; 
    }
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