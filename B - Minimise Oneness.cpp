#include <iostream>
using namespace std;
// code written by sunny
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases;
    cin >> test_cases;   
    while (test_cases--) {
        int length;
        cin >> length;
        for (int i = 0; i < length - 1; i++) {
            cout << '0';   
        }
        cout << '1';      
        cout << endl;     
    }
    return 0;   
}
