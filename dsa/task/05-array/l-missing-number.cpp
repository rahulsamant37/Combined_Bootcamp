/*
Author: Rahul Samant
Created: 2026-05-09 22:33:08
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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
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

void solve() {
    int n;
    cin >> n;

    int x, ans = 0;

    // XOR of same numbers becomes 0
    // Remaining value will be the unique number
    for (int i = 0; i < n; i++) {
        cin >> x;
        ans ^= x;
    }

    cout << ans << "\n";
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
