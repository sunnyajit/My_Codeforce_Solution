#include <bits/stdc++.h>
using namespace std;
// code written by sunny
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        ll rows, cols, startRow, startCol;
        cin >> rows >> cols >> startRow >> startCol;
        ll result = (cols - startCol) + (rows - startRow) * (cols + cols - 1);
        cout << result << "\n";
    }
    return 0;
}
