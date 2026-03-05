#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int a, b;
    cin >> a >> b;
    if (a == b) cout << "Draw" << endl;
    else a > b ? cout << "Alice" << endl : cout << "Bob" << endl;
}