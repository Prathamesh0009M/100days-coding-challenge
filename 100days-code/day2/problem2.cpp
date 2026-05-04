#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int good_sum(int N, std::vector<int> &nums) {
    // Write your logic here
     stack<int> st;

    for(int i = 0; i < N; i++) {
        if(nums[i] >= 0) {
            st.push(nums[i]);
        } else {
            int need = abs(nums[i]);
            int sum = 0;

            while(!st.empty() && sum < need) {
                sum += st.top();
                st.pop();
            }

            st.push(need);
        }
    }

    int result = 0;
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    
    // Call user logic function and print the output
    int result = good_sum(N, A);
    std::cout << result << std::endl;
    return 0;
}