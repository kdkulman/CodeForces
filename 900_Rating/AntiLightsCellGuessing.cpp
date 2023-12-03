#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
#include <stack>
using namespace std;
//https://codeforces.com/problemset/problem/1610/A


int main() {
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n == 1 && m == 1) {
            res.push_back(0);

        } else {
            res.push_back(min(n, m));

        }

    }

    for (int i : res) cout << i << '\n';
}   



/*





*/