/*
Author: Rahul Samant
Created: 2026-05-25 21:06:45
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

    vector<vector<long long>> a(n, vector<long long>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        cout << a[0][j] << " ";
    }
    for (int i = 1; i < n; i++) {
        cout << a[i][m - 1] << " ";
    }
    if (n > 1) {
        for (int j = m - 2; j >= 0; j--) {
            cout << a[n - 1][j] << " ";
        }
    }
    if (m > 1) {
        for (int i = n - 2; i >= 1; i--) {
            cout << a[i][0] << " ";
        }
    }
    return 0;
}
