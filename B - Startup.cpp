#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        map<int, int> brandCostMap;

        for (int i = 0; i < k; ++i) {
            int b, c; cin >> b >> c;
            brandCostMap[b] += c;
        }
        vector<int> totalCosts;
        for (const auto& entry : brandCostMap) totalCosts.push_back(entry.second);
        sort(totalCosts.rbegin(), totalCosts.rend());
        long long ans = 0;
        for (int i = 0; i < n && i < totalCosts.size(); ++i) ans += totalCosts[i];
        cout << ans << '\n';
    }
    return 0;
}
