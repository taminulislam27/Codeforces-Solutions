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
#define yes cout << "YES\n"
#define no  cout << "NO\n"
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
int main(){
    faster();
    int m, s; 
    cin>>m>>s; 
    if(s==0)
    {
        m==1? cout<<"0 0": cout<<"-1 -1"; 
        return 0; 
    }
    string mini = "", maxi = ""; 
    for (int i = 0; i < m; i++)
    {
        int k = min(9, s); 
        maxi.push_back('0'+k); 
        s -= k; 
    }
    if(s>0) 
    {
        cout<<"-1 -1"; return 0; 
    }
    mini = maxi; 
    reverse(mini.begin(), mini.end()); 
    int j = 0; 
    while (mini[j]=='0')
    {
        j++; 
    }
    mini[0]++; 
    mini[j]--; 
    cout<<mini<<" "<<maxi; 
    
    return 0;
}