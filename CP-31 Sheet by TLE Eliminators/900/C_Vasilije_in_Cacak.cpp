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
#define ll long long int
void tamin()
{
    ll n, k, x; 
    cin>>n>>k>>x; 
    ll startSm = 0, endSm = 0; 
    if(n<k)
    {
        no; return; 
    }
    startSm += k*(k+1)/2; 
    endSm += n*(n+1)/2 - (n-k)*(n-k+1)/2; 
    if(startSm<=x && endSm>=x) yes; 
    else no; 
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