/*
Author: Rahul Samant
Created: 2026-06-17 22:21:26
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

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long shifts = 0;

    // Number of shifts in insertion sort = number of inversions
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j])
                shifts++;
        }
    }

    vector<long long> b = a;
    long long swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        int mn = i;

        for (int j = i + 1; j < n; j++) {
            if (b[j] < b[mn]) {
                mn = j;
            }
        }

        if (b[mn] < b[i]) {
            swap(b[mn], b[i]);
            swaps++;
        }
    }

    if (shifts < swaps) {
        cout << "Insertion Sort\n";
    } else if (swaps < shifts) {
        cout << "Selection Sort\n";
    } else {
        cout << "Tie\n";
    }
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
