/*
Author: Baldy Cape
Created: 2026-01-22 22:27:24
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

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    int pos = 0, neg = 0, even = 0, odd = 0;
    rep(i, 0, n) cin >> arr[i];
    rep(i, 0, n) {
        int num = arr[i];
        if (num%2 ==0) {
            even++;
        } else {
            odd++;
        }
        if (num>0) {
            pos++;
        } else if (num<0) {
            neg++;
        }
    }
    cout << pos << '\n';
    cout << neg << '\n';
    cout << even << '\n';
    cout << odd << '\n';
}

int main() {
    setup_io();
    solve();
    return 0;
}