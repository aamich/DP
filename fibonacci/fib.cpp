#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> IntVec;

int fib(int n) {
    IntVec vals(n+1, 0);
    vals[1]=1;
    if(n < 2)
        return vals[n];
    for(int i=2; i<n+1; ++i) {
        if(!vals[i])
            vals[i]=vals[i-1]+vals[i-2];
    }
    return vals[n];
}
        
int main() {
    for(int i=2; i < 45; ++i)
        cout << i << ":" << fib(i) << endl;    
}
