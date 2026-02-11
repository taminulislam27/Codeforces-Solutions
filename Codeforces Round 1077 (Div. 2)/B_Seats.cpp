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
    int n; 
    cin>>n; 
    string s; 
    cin>>s; 
    int cnt = 0, pre = -1; 
    if(s.size() < 3) 
    {
        cout<<1<<endl; 
        return; 
    }
    if(s[0] == '0' && s[1] == '0') s[1] = '1'; 
    if(s[n-1] == '0' && s[n-2] == '0') s[n-2] = '1'; 
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '0')
        {
            if(i - pre >= 3)
                pre = i, s[i] = '1', cnt++; 
        }
        else 
            pre = i, cnt++; 
    }
    cout<<cnt<<endl; 
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