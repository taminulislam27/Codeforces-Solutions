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
    int count_of_zeros = 0; 
    bool found_zero = false; 
    int left = 0; 
    int right = n-1; 
    while(left != n && a[left] == 0) left++; 
    while(a[right] == 0) right--; 
    for(int i = left; i<=right; i++){
        if(a[i] == 0) found_zero = true; 
    }
    if(left == n) cout<<0<<endl; 
    else if(!found_zero) cout<<1<<endl; 
    else cout<<2<<endl; 
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