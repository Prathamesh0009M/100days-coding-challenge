#include<vector>
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

void func(vector<string> str, int k) {
    unordered_map<string, int> freq;

    for (auto s : str) {
        freq[s]++;
    }

    vector<string> uniqueStrings;

    for (auto s : str) {
        if (freq[s] == 1) {
            uniqueStrings.push_back(s);
        }
    }

    if (k > 0 && k <= uniqueStrings.size()) {
        cout << uniqueStrings[k - 1];
    } else {
        cout << -1;
    }
}

int main() {
    int N;
    cin >> N;

    vector<string> str(N);
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    int k;
    cin >> k;

    func(str, k);
    return 0;
}