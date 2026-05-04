#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// User logic function
int highestAltitude(int n, const vector<int>& arr) {
   
   int maxi=0;
   int sum=0;
   for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    maxi=max(maxi,sum);
   }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Call user logic function and print the output
    int result = highestAltitude(n, arr);
    cout << result << endl;

    return 0;
}