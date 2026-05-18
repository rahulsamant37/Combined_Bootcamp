/*
Author: Rahul Samant
Created: 2026-05-12 21:54:50
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
    int N;
    cin >> N;

    vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    long long X;
    cin >> X;

    unordered_map<long long, long long> freq;
    long long ans = 0;

    for (int i = 0; i < N; i++) {
        long long need = X - a[i];

        if (freq.count(need)) {
            ans += freq[need];
        }

        freq[a[i]]++;
    }

    cout << ans << '\n';
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
