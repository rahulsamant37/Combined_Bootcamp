/*
Author: Rahul Samant
Created: 2026-04-20 15:32:16
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

    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++) {
        int stars, spaces;

        if (i <= n) {
            stars = n - i + 1;
            spaces = 2 * i - 1;
        } else {
            stars = i - n + 1;
            spaces = 2 * (totalRows - i) + 1;
        }

        // Left stars
        for (int j = 0; j < stars; j++) cout << "*";

        // Middle spaces
        for (int j = 0; j < spaces; j++) cout << " ";

        // Right stars
        for (int j = 0; j < stars; j++) cout << "*";

        cout << "\n";
    }
    return 0;
}
