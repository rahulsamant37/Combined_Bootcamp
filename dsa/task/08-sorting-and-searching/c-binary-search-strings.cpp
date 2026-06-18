/*
Author: Rahul Samant
Created: 2026-06-12 06:21:06
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

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    string x;
    cin >> x;

    int left = 0, right = n - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (names[mid] == x) {
            found = true;
            break;
        } else if (names[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << (found ? "YES" : "NO") << '\n';
    return 0;
}
