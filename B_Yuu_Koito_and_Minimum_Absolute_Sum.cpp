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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            if (i == 0 || i == n - 1)
            {
                int x = max(a[0], a.back());
                if (a[0] == -1 && a.back() == -1)
                    x = 0;
                a[i] = x;
            }
            else
                a[i] = 0;
        }
    }
    cout << abs(a[0] - a.back()) << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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