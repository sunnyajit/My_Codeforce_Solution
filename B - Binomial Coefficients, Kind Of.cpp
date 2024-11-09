#include <bits/stdc++.h>
using namespace std;
// code written by sunny
long long mod_exp(long long base, long long exponent, long long modulus) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}
void process_cases() {
    long long test_cases;
    cin >> test_cases;
    long long modulus = 1e9 + 7;
    vector<long long> values_a(test_cases), values_b(test_cases);
    for (long long i = 0; i < test_cases; i++) {
        cin >> values_a[i];  
    }
    for (long long i = 0; i < test_cases; i++) {
        cin >> values_b[i]; 
    }
    for (long long i = 0; i < test_cases; i++) {
        cout << mod_exp(2, values_b[i], modulus) << endl;  
    }
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);             
    process_cases();              

    return 0;
}
