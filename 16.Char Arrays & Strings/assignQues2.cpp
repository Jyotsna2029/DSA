#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool canBeEqualWithOneSwap(string s1, string s2) {
    if (s1 == s2) return true;

    vector<int> diff;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }

    // Must be exactly 2 mismatches
    if (diff.size() != 2) return false;

    // Check if swapping s1[diff[0]] and s1[diff[1]] makes it equal to s2
    int i = diff[0], j = diff[1];
    return s1[i] == s2[j] && s1[j] == s2[i];
}

int main() {
    string s1 = "bank";
    string s2 = "kanb";

    if (canBeEqualWithOneSwap(s1, s2)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
