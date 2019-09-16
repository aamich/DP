#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> IntVec;
typedef vector<IntVec> IntVecVec;

bool subset(const IntVec& arr, int sum) {
    IntVecVec Opt(arr.size(), IntVec(sum+1, 0));
if(0)
    for(int i=0; i < Opt.size(); ++i) {
        for(int j=0; j < Opt[i].size(); ++j){
            cout << Opt[i][j] <<" ";
        }
        cout << endl;
    }

    for(int i=0; i < arr.size(); ++i)
       Opt[i][0] = 1; 
    for(int j=1; j <= sum; ++j)
        Opt[0][j] = (arr[0] == j); 
if(0)
    for(int i=0; i < Opt.size(); ++i) {
        for(int j=0; j < Opt[i].size(); ++j){
            cout << Opt[i][j] <<" ";
        }
        cout << endl;
    }

    for(int i=1; i < arr.size(); ++i) {
        for(int j=1; j <= sum; ++j) {
            if(arr[i] > j)
                Opt[i][j] = Opt[i-1][j]; 
            else
                Opt[i][j] = Opt[i-1][j] + Opt[i-1][j-arr[i]]; 
        }
    }
    return Opt[arr.size()-1][sum]!=0;
}

int main() {
    IntVec arr{4,2,5,6};
    cout << "arr = { ";
    for(int i=0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << "}" <<  endl;
    for(int i=3; i < 18; ++i)
        cout << "sum=" << i << ":" << subset(arr, i) << endl;
}
