#include <iostream>
#include <vector>
#include <cmath>
// code written by sunny
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;  
    while (testCases--) {
        int noteCount;
        cin >> noteCount; 
        vector<int> melody(noteCount);
        for (int& note : melody) {
            cin >> note;  
        }
        bool isPerfectMelody = true;
        for (size_t i = 1; i < melody.size(); ++i) {
            int interval = abs(melody[i] - melody[i - 1]);  
            if (interval != 5 && interval != 7) {
                isPerfectMelody = false;  
                break;
            }
        }
        cout << (isPerfectMelody ? "YES" : "NO") << endl;  
    }
    return 0;
}