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
    int cnt = 0; 
    bool ok = true; 
    for_i(0, n) cin>>a[i]; 
    if(n > 1){
        for_n(n-1, 1){
            while(a[i-1]>=a[i] && a[i-1] > 0)
                a[i-1] /= 2, cnt++; 
        }
        for_i(0, n-1){
            if(a[i] == a[i+1]){
                ok = false; 
                break; 
            }
        }
    }
    // for_i(0, n) cout<<a[i]<<" "; nl; 
    if(!ok) cout<<-1<<endl; 
    else cout<<cnt<<endl; 
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