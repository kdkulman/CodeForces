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
//https://codeforces.com/problemset/problem/1350/A



int main() {
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n % 2 == 1) {
            int i = 3;
            while (n % i != 0) {
                i++;
            }
            n += i;
            k--;
        }

        n += 2*k;
        res.push_back(n);
    }

    for (int i : res) cout << i << '\n';
}   



/*

input 1:
3
5 1
8 2
3 4

output 1:
10
12
12

input 2:
6
2 1
3 1
4 2
5 2
6 7
8 9

output 2:
4
6
8
12
20
26


*/