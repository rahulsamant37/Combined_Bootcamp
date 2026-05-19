/*
Author: Rahul Samant
Created: 2026-05-13 22:09:30
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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
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

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long X;
    cin >> X;

    sort(a.begin(), a.end());

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int l = i + 1;
        int r = n - 1;

        while (l < r) {
            long long sum = a[i] + a[l] + a[r];

            if (sum < X) {
                l++;
            } else if (sum > X) {
                r--;
            } else {
                // If same values between l and r
                if (a[l] == a[r]) {
                    long long cnt = r - l + 1;
                    ans += (cnt * (cnt - 1)) / 2;
                    break;
                }

                long long leftCount = 1;
                long long rightCount = 1;

                while (l + 1 < r && a[l] == a[l + 1]) {
                    leftCount++;
                    l++;
                }

                while (r - 1 > l && a[r] == a[r - 1]) {
                    rightCount++;
                    r--;
                }

                ans += leftCount * rightCount;

                l++;
                r--;
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
