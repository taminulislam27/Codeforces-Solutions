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
    for_i(0, n) cin>>a[i]; 
    if(n%2==0)
    {
        cout<<2<<endl; 
        cout<<1<<" "<<n<<endl; 
        cout<<1<<" "<<n<<endl; 
    }
    else
    {
        cout<<4<<endl; 
        cout<<1<<" "<<n-1<<endl; 
        cout<<1<<" "<<n-1<<endl; 
        cout<<n-1<<" "<<n<<endl; 
        cout<<n-1<<" "<<n<<endl; 
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