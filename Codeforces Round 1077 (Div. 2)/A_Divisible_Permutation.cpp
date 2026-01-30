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
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n; cin>>n;
    cout<<((n+1)/2)<<" ";  
    for (int i = 1; i < n; i++)
    {
        if(i%2==0)
        {
            cout<<((n+1)/2) - ((i+1)/2)<<" "; 
        }
        else
        {
            cout<<((n+1)/2) + ((i+1)/2)<<" "; 
        }
    }
    nl; 
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