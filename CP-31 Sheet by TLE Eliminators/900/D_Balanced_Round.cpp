/*
._____________________..
|                      |
|   Md_Taminul_Islam   |
|   CSE @BU            |
|______________________|
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// #define end "\n"
int main()
{
    ios_base::sync_with_stdio(0) ; 
    cin.tie(0) ;  
    
    //START CODE HERE
    int t; cin>>t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int cnt = 0, mx = 0;
        for (int i = 0; i < n-1; i++)
        {
            (a[i+1]-a[i]<=k)? cnt++: cnt = 0;
            mx = max(mx, cnt);
        }
        cout<<n-mx-1<<endl;
    }
    
    
    return 0;
}