/*
Author: Rahul Samant
Created: 2026-05-18 21:33:07
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
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x, mn = 1000000;

        for (int j = 0; j < m; j++) {
            cin >> x;
            mn = min(mn, x);
        }

        cout << mn;
        if (i != n - 1) cout << " ";
    }
    return 0;
}
