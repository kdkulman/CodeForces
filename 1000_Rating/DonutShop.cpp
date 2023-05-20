#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;

//https://codeforces.com/problemset/problem/1373/A

int main() {
    int t;

    cin >> t;
    vector<vector<long long>> res; 
    while(t--) {
        double a, b, c;
        cin >> a >> b >> c;
        vector<long long> ans;
        if (a < c) ans.push_back(1);
        else ans.push_back(-1);

        if ((c/b) < a) {
            long long b2 = b;
            b2 *= 2;
            ans.push_back(b);
        }
        else ans.push_back(-1);

        res.push_back(ans);

    }

    for (vector<long long> s : res) {
        cout << s[0] << " " << s[1] << '\n';
    }

}   

/*
4
5 10 4
4 5 20
2 2 3
1000000000 1000000000 1000000000

1
4 5 20

1
3 3 5

1
3 5 15


*/