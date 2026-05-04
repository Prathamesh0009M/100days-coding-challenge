#include <iostream>
#include <vector>
#include <string>
using namespace std;

int user_logic(vector<string>& ops) {
    vector<int> nums;
    int sum = 0;

    for(int i = 0; i < ops.size(); i++) {
        string ch = ops[i];

        if(ch == "+") {
            int val = nums[nums.size()-1] + nums[nums.size()-2];
            nums.push_back(val);
            sum += val;
        } 
        else if(ch == "C") {
            sum -= nums.back();
            nums.pop_back();
        } 
        else if(ch == "D") {
            int val = nums.back() * 2;
            nums.push_back(val);
            sum += val;
        } 
        else {
            int val = stoi(ch); 
            nums.push_back(val);
            sum += val;
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<string> ops(n);
    for (int i = 0; i < n; ++i) {
        cin >> ops[i];
    }

    cout << user_logic(ops) << endl;
    return 0;
}