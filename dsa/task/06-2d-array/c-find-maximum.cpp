/*
Author: Rahul Samant
Created: 2026-04-04 22:37:43
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

// const int MOD = 1e9 + 7;
// const ll INF = 1e18;

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
    vector<vector<int>> arr(n, vector<int>(m));
    rep(r, 0, n) {
        rep(c, 0, m) {
            cin >> arr[r][c];
        }
    }
    int max_el = arr[0][0];
    rep(r, 0, n) {
        rep(c, 0, m) {
            if (arr[r][c]>max_el) {
                max_el = arr[r][c];
            }
        }
    }
    cout << max_el;

    return 0;
}

