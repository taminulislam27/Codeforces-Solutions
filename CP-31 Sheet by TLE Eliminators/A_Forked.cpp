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
vector<ll>dx = {1, 1, -1, -1}; 
vector<ll>dy = {1, -1, 1, -1}; 
void tamin()
{
    ll a, b; 
    cin>>a>>b; 
    ll x_king, y_king; 
    cin>>x_king>>y_king; 
    ll x_queen, y_queen; 
    cin>>x_queen>>y_queen; 
    set<pair<ll, ll>>k_hits; 
    set<pair<ll, ll>>q_hits; 
    for_i(0, 4)
    {
        k_hits.insert({x_king + dx[i]*a, y_king + dy[i]*b}); 
        k_hits.insert({x_king + dx[i]*b, y_king + dy[i]*a});
        
        q_hits.insert({x_queen + dx[i]*a, y_queen + dy[i]*b});
        q_hits.insert({x_queen + dx[i]*b, y_queen + dy[i]*a}); 
    }
    int ans = 0; 
    for(auto hits: k_hits)
    {
        if(q_hits.find(hits) != q_hits.end()) ans++; 
    }
    cout<<ans<<endl; 
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