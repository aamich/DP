// longest increasing (non-decreasing) subsequence
//
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int lis(const vector<int>& v) {
    vector<int> opt(v.size(), 1);
    for(int i=1; i < v.size(); ++i) {
        for(int j=0; j < i; ++j) {
            if(v[j] <= v[i])
                opt[i] = 1+opt[j];
        }
    }
    return *max_element(opt.begin(), opt.end());
}

int main() {
    vector<int> v{-1, 3, 4, 5, 2, 2, 2, 2};
    for (int i : v)
        cout << i << " ";
    cout << endl;
    cout << lis(v) << endl;
}
