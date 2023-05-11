#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>

//https://codeforces.com/problemset/problem/1822/C
using namespace std;

int main() {
    int t;

    cin >> t;
    vector<long long> res; 
    while(t--) {
        long long n, a;
        cin >> n;
        
        a = (n*n) + (2*n)+2;
        res.push_back(a);
    }

    for (long long s : res) cout << s << '\n';

}   

/*

1
4 4
0 0 0 0

5
2 2
0 0
2 2
0 1
2 2
1 0
2 2
1 1
3 2
0 0 0

*/