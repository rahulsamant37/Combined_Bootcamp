/*
Author: Rahul Samant
Created: 2026-05-28 20:08:48
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
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "Lowercase";
    } else if (c >= 'A' && c <= 'Z') {
        cout << "Uppercase";
    } else if (c >= '0' && c <= '9') {
        cout << "Digit";
    } else {
        cout << "Special";
    }
    return 0;
}
