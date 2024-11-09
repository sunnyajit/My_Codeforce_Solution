#include <iostream>
#include <vector>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);   
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min_val = 1001, max_val = 0; 
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x < min_val) min_val = x; 
            if (x > max_val) max_val = x;   
        }
        long long score = (max_val - min_val) * (n - 1);  
        cout << score << endl;
    }

    return 0;
}
