/*
Author: Rahul Samant
Created: 2026-04-27 16:34:16
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

int countZeros(long long N) {
    if (N == 0) return 1; // special case

    int count = 0;
    while (N > 0) {
        if (N % 10 == 0) {
            count++;
        }
        N /= 10;
    }
    return count;
}

int main() {
    setup_io();
    ll n;
    cin >> n;
    cout << countZeros(n) << endl;
    return 0;
}
