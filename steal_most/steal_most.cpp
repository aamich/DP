#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> IntVec;

int stealMost(const IntVec& arr, int n) {
    IntVec Opt(arr.size(), 0);
    Opt[0] = arr[0];
    Opt[1] = arr[1];
    if(n < 2)
        return Opt[n];
    for(int i = 2; i < n; ++i)
        Opt[i] = max(arr[i] + Opt[i-2], Opt[i-1]);
    return Opt[n-1];
}

int main()
{
    // community has follwing neighbors with values as shown to pick up
    // try to get the most but not from any two immediate neighbors to avoid triggering alart
    IntVec arr{1, 2, 4, 1, 7, 8, 3};
    cout << stealMost(arr, 4) << endl;
    cout << stealMost(arr, 5) << endl;
    cout << stealMost(arr, 6) << endl;
    cout << stealMost(arr, 7) << endl;
}
