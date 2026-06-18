/*
Author: Rahul Samant
Created: 2026-06-18 20:08:22
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

    vector<long long> A(n), B(m);

    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) cin >> B[i];

    vector<long long> merged;
    merged.reserve(n + m);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            merged.push_back(A[i++]);
        } else {
            merged.push_back(B[j++]);
        }
    }

    while (i < n) merged.push_back(A[i++]);
    while (j < m) merged.push_back(B[j++]);

    for (int k = 0; k < (int)merged.size(); k++) {
        if (k) cout << ' ';
        cout << merged[k];
    }
    cout << '\n';
    return 0;
}
