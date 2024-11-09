#include <iostream>
#include <vector>
#include <numeric>  
using namespace std;
// code written by sunny
int main() {
   ios::sync_with_stdio(false);
    cin.tie(0);
    int testCases, arraySize;
    cin >> testCases;
    while (testCases--) {
        cin >> arraySize;
        vector<long long> numbers(arraySize);
        for (auto &element : numbers) cin >> element;
        cout << numbers[arraySize - 1] - (numbers[arraySize - 2] - accumulate(numbers.begin(), numbers.begin() + arraySize - 2, 0LL)) << '\n';
    }

    return 0;
}
