#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countConsistentCars(const string& components, int n, const vector<string>& models) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        bool ok = true;

        for(char c : models[i]) {
            if(components.find(c) == string::npos) {
                ok = false;
                break;
            }
        }

        if(ok) count++;
    }

    return count;
}

int main() {
    string components;
    int n;
    vector<string> models;


    getline(cin, components);
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string model;
        cin >> model;
        models.push_back(model);
    }

    cout << countConsistentCars(components, n, models) << endl;

    return 0;
}


// Prathamesh vasant Jadhav
