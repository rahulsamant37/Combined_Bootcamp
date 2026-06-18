/*
Author: Rahul Samant
Created: 2026-06-14 08:15:27
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
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int pass = 1; pass <= N - 1; pass++) {
        int swaps = 0;

        for (int i = 0; i < N - pass; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swaps++;
            }
        }

        cout << "Pass " << pass << ": ";
        for (int i = 0; i < N; i++) {
            if (i) cout << " ";
            cout << a[i];
        }
        cout << " , swaps = " << swaps << "\n";

        if (swaps == 0) break;
    }
    return 0;
}
