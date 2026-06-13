/*
Author: Rahul Samant
Created: 2026-06-05 06:20:56
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
    cin >> s;

    bool lower = false, upper = false, digit = false, special = false;

    for (char c : s) {
        if (islower(c))
            lower = true;
        else if (isupper(c))
            upper = true;
        else if (isdigit(c))
            digit = true;
        else
            special = true;
    }

    if (s.length() == 10 && lower && upper && digit && special)
        cout << "Strong\n";
    else
        cout << "Weak\n";
    
    return 0;
}
