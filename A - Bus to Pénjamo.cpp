#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int num_players, required;
        cin >> num_players >> required;
        
        vector<int> cars(num_players);
        for (int &car : cars) cin >> car;
        
        int total_cars = accumulate(cars.begin(), cars.end(), 0);
        int result = min(2 * required - total_cars, total_cars);
        
        int pair_count = accumulate(cars.begin(), cars.end(), 0, [](int sum, int x) { return sum + x / 2; });
        result += 2 * min(pair_count, (total_cars - result) / 2);
        
        cout << result << '\n';
    }
    
    return 0;
}
