/*
Author: Rahul Samant
Created: 2026-06-30 14:11:07
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
    string s;
    getline(cin, s);

    int mx = 0, cnt = 0;

    for (char c : s) {
        if (c == ' ') {
            mx = max(mx, cnt);
            cnt = 0;
        } else {
            cnt++;
        }
    }

    // Check the last word
    mx = max(mx, cnt);

    cout << mx << endl;
    return 0;
}
