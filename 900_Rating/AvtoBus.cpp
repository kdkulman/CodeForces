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
//https://codeforces.com/problemset/problem/1679/A


int main() {
    int t;
    cin >> t;
    vector<vector<long long>> res;
    while (t--) {
        long long N;
        cin >> N;
        long long n = N;
// MIN: 
// Subtract 4 from n until n % 6 = 0
// For each n-4: res++
// when n%6 = 0: res += n/6

// MAX:
// Subtract 6 from n until  n % 4 = 0
// For each n-6: res++
// when n%4 = 0: res += n/4
        long long min = 0;
        vector<long long> ans;

        while ( n % 6 != 0 && n > 0 && min < 10) {
            min++;
            n -= 4;
        }

        if (n > 0 && min < 10) {
            min += (n/6);
            ans.push_back(min);
        }

        long long max = 0;
        n = N;

        while ( n % 4 != 0 && n > 0 && max < 10) {
            max++;
            n -= 6;
        }

        if (n > 0 && max < 10) {
            max += (n/4);
            ans.push_back(max);
        }

        //Publish answer
        if (ans.size() == 0) {
            res.push_back({-1});
        } else if (ans.size() == 1) {
            ans.push_back(ans[0]);
            res.push_back(ans);
        } else {
            res.push_back(ans);
        }

    }

    for (vector<long long> list : res) {
        for(long long i : list) {
            cout << i << " ";
        }
        cout << '\n';
    }
}   



/*

4
4
7
24
998244353998244352




*/