/*
Author: Rahul Samant
Created: 2026-05-22 22:55:23
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

    vector<vector<int>> a(n, vector<int>(m));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Print in wave form column-wise
    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) {
            // Top to bottom
            for (int i = 0; i < n; i++) {
                cout << a[i][j] << " ";
            }
        } else {
            // Bottom to top
            for (int i = n - 1; i >= 0; i--) {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}
