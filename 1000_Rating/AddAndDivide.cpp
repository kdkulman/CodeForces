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
//https://codeforces.com/problemset/problem/1485/A


int main() {
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int startA, startB, cost = 0;
        cin >> startA >> startB;
        if (startB == 1) {
            cost++;
            startB++;
        }

       for (int i = 1; i < startA/2; i++) {
        
       }

        while (a > 0) {
            if (a == b) {
                b++;
            } else {
                a /= b;
            }
            cost++;
        }

        res.push_back(cost);

    }

    for (int i : res) cout << i << '\n';
}   



/*





*/