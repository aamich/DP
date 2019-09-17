// longest common sequences to find the gene sequence
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lcs(const string& s1, const string& s2) {
    int m = s1.size()+1;
    int n = s2.size()+1;
    vector<vector<int>> opt(m, vector<int>(n, 0));
    for(int i=1; i < m; ++i) {
       for(int j=1; j < n; ++j) {
           if(s1[i-1]==s2[j-1])
               opt[i][j]=1+opt[i-1][j-1];
           else
               opt[i][j]=max(opt[i-1][j], opt[i][j-1]);
       }
    }
    return opt[m-1][n-1];
}

int main() {
    string s1="gtactcatg";
    string s2="agtcatag";
    cout << s1 << endl;
    cout << s2 << endl;
    cout << lcs(s1, s2) << endl;
}
