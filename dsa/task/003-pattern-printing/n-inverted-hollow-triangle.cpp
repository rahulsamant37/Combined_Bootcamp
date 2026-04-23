/*
Author: Rahul Samant
Created: 2026-04-15 02:22:41
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

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) cout << " ";

        int stars = n - i + 1;

        if (i == 1) {
            for (int j = 1; j <= stars; j++) cout << "* ";
        }
        else if (i == n) {
            cout << "*";
        }
        else {
            cout << "*";
            for (int j = 1; j <= 2 * stars - 3; j++) cout << " ";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
