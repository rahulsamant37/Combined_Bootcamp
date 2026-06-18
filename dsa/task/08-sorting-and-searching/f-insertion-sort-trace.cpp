/*
Author: Rahul Samant
Created: 2026-06-15 23:12:00
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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        int shifts = 0;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
            shifts++;
        }

        a[j + 1] = key;

        cout << "Pass " << i << ": ";

        for (int k = 0; k < n; k++) {
            if (k) cout << ' ';
            cout << a[k];
        }

        cout << " , ";

        for (int k = 0; k <= i; k++) {
            if (k) cout << ' ';
            cout << a[k];
        }

        cout << " |";

        if (i + 1 < n) cout << ' ';
        for (int k = i + 1; k < n; k++) {
            if (k > i + 1) cout << ' ';
            cout << a[k];
        }

        cout << " , shifts = " << shifts << '\n';
    }
    return 0;
}
