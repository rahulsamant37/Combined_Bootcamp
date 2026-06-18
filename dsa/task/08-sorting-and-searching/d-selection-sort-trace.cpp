/*
Author: Rahul Samant
Created: 2026-06-13 07:55:43
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
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N - 1; i++) {
        int minIdx = i;

        // find minimum in unsorted part
        for (int j = i + 1; j < N; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }

        int minVal = a[minIdx];

        // swap with current position
        swap(a[i], a[minIdx]);

        // print array after swap
        cout << "Pass " << (i + 1) << ": ";
        for (int k = 0; k < N; k++) {
            cout << a[k];
            if (k != N - 1) cout << " ";
        }
        cout << " , min_selected = " << minVal << "\n";
    }
    return 0;
}
