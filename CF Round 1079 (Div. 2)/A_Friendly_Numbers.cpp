#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll digitSum(ll n){
    ll s = 0;
    while(n){
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        ll ans = 0;
        for(ll y = x + 1; y <= x + 100; y++){
            if(y - digitSum(y) == x)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
