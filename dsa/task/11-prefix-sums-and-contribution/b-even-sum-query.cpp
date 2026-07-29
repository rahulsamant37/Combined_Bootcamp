/*
Author: Rahul Samant
Created: 2026-07-29 22:18:57
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

template<typename T>
void show_all(std::string_view rem, const T& v)
{
    std::cout << rem << ": ";
    for (const auto& e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

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

    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1];
        if (i % 2 == 0)
            pref[i] += x;
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
    }
    return 0;
}
