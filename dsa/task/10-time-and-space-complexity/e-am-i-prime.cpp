/*
Author: Rahul Samant
Created: 2026-07-17 23:18:39
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
    long long n;
    cin >> n;

    if (n < 2) {
        cout << "NO";
        return 0;
    }

    if (n == 2) {
        cout << "YES";
        return 0;
    }

    if (n % 2 == 0) {
        cout << "NO";
        return 0;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
