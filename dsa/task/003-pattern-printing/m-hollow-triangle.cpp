/*
Author: Rahul Samant
Created: 2026-04-14 18:38:28
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define endl '\n'

#ifdef LOCAL
#define debug(x) cerr << "[DEBUG] " << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    setup_io();
    int n;
    cin >> n;
    string str;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";

        if (i == 1) {
            cout << "*";
        }
        else if (i == n) {
            // last row: print stars with spaces
            for (int j = 1; j <= 2 * n - 1; j++) {
                if (j % 2 == 1) cout << "*";
                else cout << " ";
            }
        }
        else {
            cout << "*";
            for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
