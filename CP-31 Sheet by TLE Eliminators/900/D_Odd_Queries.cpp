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
    int n, q; 
    cin>>n>>q; 
    vector<int>a(n); 
    for_i(0, n) cin>>a[i]; 
    vector<int>suf(n), pre(n); 
    suf[0] = a[n-1]; 
    pre[0] = a[0]; 
    for_i(1, n){
        suf[i] = suf[i-1] + a[n-i-1]; 
    }
    reverse(suf.begin(), suf.end()); 
    for_i(1, n){
        pre[i] = pre[i-1] + a[i]; 
    }
    // for_i(0, n){
    //     cout<<pre[i]<<" "; 
    // }nl; 
    // for_i(0, n){
    //     cout<<suf[i]<<" "; 
    // }nl; 
    while (q--)
    {
        int l, r, k; 
        cin>>l>>r>>k; 
        int sm = pre[l-1]-a[l-1] + suf[r-1]-a[r-1] + (r-l+1)*k; 
        // cout<<sm<<" "; 
        sm%2==0? no: yes; 
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