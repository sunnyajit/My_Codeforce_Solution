#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, d, mx = 0;
        long long sum = 0;
        cin >> n >> d;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }
        cout << max((sum + d - 1) / d, (long long)mx) << '\n';
    }
    return 0;
}
