/*
Author: Rahul Samant
Created: 2026-07-06 23:36:11
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
    int m, n;
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    bool first = true;

    while (top <= bottom && left <= right) {
        // Left -> Right
        for (int j = left; j <= right; j++) {
            if (!first) cout << " ";
            cout << a[top][j];
            first = false;
        }
        top++;

        // Top -> Bottom
        for (int i = top; i <= bottom; i++) {
            cout << " " << a[i][right];
        }
        right--;

        // Right -> Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << " " << a[bottom][j];
            }
            bottom--;
        }

        // Bottom -> Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << " " << a[i][left];
            }
            left++;
        }
    }
    return 0;
}
