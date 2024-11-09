#include <bits/stdc++.h>
using namespace std;
#define int long long
// code written by sunny
int32_t main() {
    int testCases; 
    cin >> testCases;
    while (testCases--) {
        int numMembers, numSlides, numUpdates; 
        cin >> numMembers >> numSlides >> numUpdates;
        vector<int> members(numMembers), requiredPresenters;
        for (int &member : members) cin >> member;
        for (int i = 0, slide; i < numSlides; i++) {
            cin >> slide;
            if (requiredPresenters.empty() || requiredPresenters.back() != slide) 
                requiredPresenters.push_back(slide);
        }
        unordered_set<int> presentedMembers;
        bool isValid = true;
        int currentIdx = 0;
        for (int presenter : requiredPresenters) {
            if (presenter == members[currentIdx]) {
                presentedMembers.insert(members[currentIdx++]);
            } else if (!presentedMembers.count(presenter)) {
                isValid = false; 
                break;
            }
        }
        cout << (isValid ? "YA" : "TIDAK") << endl;
    }
    return 0;
}
