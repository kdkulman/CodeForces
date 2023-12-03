#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
#include <stack>
using namespace std;
//https://codeforces.com/problemset/problem/1427/A


int main() {
    int t;
    cin >> t;
    vector<vector<string>> res;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int sum = accumulate(a.begin(), a.end(), 0);
        if (sum == 0) {
            res.push_back({"NO"});
            continue;
        }
        sort(a.begin(), a.end());
        stack<int> stack;
        vector<string> output;

    }

    for (int i : res) cout << i << '\n';
}   



/*





*/