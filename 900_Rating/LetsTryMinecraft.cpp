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
//https://codeforces.com/problemset/problem/1709/B



int main() {
vector<long long> res;
    int n, m;
    cin >> n >> m;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];

    vector<vector<int>> quests(m, vector<int>(2));
    for (int i = 0; i < m; i++) 
        cin >> quests[i][0] >> quests[i][1];

    //fill out dp arrays
    vector<long long> dp(n+1), dpReverse(n+1);
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] < a[i-1]) {
            dp[i] = dp[i-1] + (a[i-1] - a[i]);
        } else {
            dp[i] = dp[i-1];
        }
    }
    // cout << "DP: " << '\n';
    // for (int i : dp) cout << i << " ";
    // cout << '\n';



    dpReverse[n] = 0;
    for (int i = n-1; i >= 1; i--) {
        if (a[i] < a[i+1]) {
            dpReverse[i] = dpReverse[i+1] + (a[i+1] - a[i]);
        } else {
            dpReverse[i] = dpReverse[i+1];
        }
    }
    // cout << "REVERSE DP: " << '\n';
    // for (int i : dpReverse) cout << i << " ";


    
    for (vector<int> quest : quests) {
        int start = quest[0], end = quest[1];

        if (start > end) {
            res.push_back(dpReverse[end] - dpReverse[start]);
        } else {
            res.push_back(dp[end] - dp[start]);
        }
    }

    for (long long i : res) cout << i << '\n';
}   



/*





*/