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
//https://codeforces.com/problemset/problem/1770/B



int main() {
    int t;
    cin >> t;
    vector<vector<int>> res;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> p;

        int start = 1, end = n;
        bool pushEnd = true;
        while (start <= end) {
            if (pushEnd) {
                p.push_back(end);
                end--;
                pushEnd = !pushEnd;
            } else {
                p.push_back(start);
                start++;
                pushEnd = !pushEnd;
            }
        }
        res.push_back(p);
    }

    for (vector<int> list : res) {
        for (int i : list) {
            cout << i << " ";
        }

        cout << '\n';
    }
}   



/*

input:
3
5 3
5 1
6 6

output:
5 1 2 3 4
1 2 3 4 5
3 2 4 1 6 5






*/