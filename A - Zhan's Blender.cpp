#include <iostream>
#include <cmath>
using namespace std;
// code written by sunny
int main() {
    int t;
    cin >> t;   
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;   
        if (n == 0) {
            cout << 0 << endl;
        } else {
            long long blend_rate = min(x, y);
            long long seconds = (n + blend_rate - 1) / blend_rate;
            cout << seconds << endl;
        }
    }
    
    return 0;
}