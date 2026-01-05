/*
        /\_/\.     
       (= ._.)    
       / >  \>  
._____________________..
|                      |
|   Md_Taminul_Islam   |
|   CSE @ BU           |
|______________________|
*/#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define yes cout << "Yes\n"
#define no  cout << "No\n"
#define nl  cout << "\n"
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define ff first
#define ss second
ll gcdll(ll a, ll b){ return (b == 0 ? a : gcdll(b, a % b)); }
ll lcmll(ll a, ll b){ return a / gcdll(a, b) * b; }
ll binpow(ll a, ll b){     // a^b 
    ll res = 1;
    while(b){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
ll binpow_mod(ll a, ll b, ll mod){   // (a^b) % mod
    ll res = 1 % mod;
    a %= mod;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
bool isPrime(ll n){
    if(n < 2) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
void solve()
{
    int n; cin>>n; 
    vector<int>a(n); 
    set<int>s; 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]; s.insert(a[i]); 
    }
    if(s.size()>2) 
    {
        no; return;
    }
    else if(s.size()==1) 
    {
        yes; return; 
    }
    int c1 = 0, c2 = 0; 
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[0]) c1++; 
        else c2++; 
    }
    if(n%2==0) 
    {
        c1==c2? yes: no;
    }
    else 
    {
        abs(c1-c2)==1? yes: no; 
    }
}
int main(){
    faster();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}