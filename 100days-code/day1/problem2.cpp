#include<vector>
#include<unordered_map>
#include <iostream>

using namespace std;

void find_youngest_member(int n, int m, vector<pair<int, int>> &gifts) {
    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++) {
        mp[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int memb1 = gifts[i].first;
        int memb2 = gifts[i].second;

        mp[memb1]--;    
        mp[memb2]++; 
    }

    for (int i = 1; i <= n; i++) {
        if (mp[i] == n - 1) {
            cout << i;
            return;
        }
    }

    cout << -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> gifts(m);
    for (int i = 0; i < m; i++) {
        cin >> gifts[i].first >> gifts[i].second;
    }

    find_youngest_member(n, m, gifts);
    return 0;
}