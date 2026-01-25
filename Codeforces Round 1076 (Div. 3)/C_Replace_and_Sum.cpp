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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            a[i] = b[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > a[i - 1])
            a[i - 1] = a[i];
    }
    vector<int> pre(a);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += a[i], a[i] = cnt;
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l - 2 >= 0)
            cout << a[r - 1] - a[l - 2] << " ";
        else
            cout << a[r - 1] - 0 << " ";
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