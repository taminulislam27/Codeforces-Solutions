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
    for_i(0, n) a[i] = i+1; 
    reverse(all(a)); 
    // if(n > 2){
    //     int tmp = a[1]; 
    //     a[1] = a[n-1]; 
    //     a[n-1] = tmp; 
    // }
    for_i(0, n) cout<<a[i]<<" "; nl;  
    // for_i(0, n-1) cout<<a[i]%a[i+1]<<" "; nl; nl; 
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