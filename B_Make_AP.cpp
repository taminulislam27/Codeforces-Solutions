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
void solve()
{
    int a, b, c; 
    cin>>a>>b>>c; 
    int x = 2*b-c, y = 2*b-a, z = (a+c)%(2*b); 
    ((x>0 && x%a==0) || (y>0 && y%c==0) || z==0)? yes: no; 
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