/*
Author: Rahul Samant
Created: 2026-07-10 22:29:35
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
    int q;
    cin >> q;

    while (q--) {
        int t;
        long long l, r;
        cin >> t >> l >> r;

        if (l > r) {
            cout << 0 << "\n";
            continue;
        }

        long long a = l, b = r;

        if (t == 1) {
            a = l + 1;
            b = r - 1;
        } else if (t == 2) {
            a = l;
            b = r - 1;
        } else if (t == 3) {
            a = l + 1;
            b = r;
        }

        if (a > b)
            cout << 0 << "\n";
        else
            cout << b - a + 1 << "\n";
    }
    return 0;
}
