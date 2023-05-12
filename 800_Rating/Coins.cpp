#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>

//https://codeforces.com/problemset/problem/1814/A
using namespace std;

int main() {
    int t;

    cin >> t;
    vector<string> res; 
    while(t--) {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0) res.push_back("YES"); 
        else if (n % k == 0) res.push_back("YES");
        else if (n-k > 0 && (n-k) % 2 == 0) res.push_back("YES");
        else res.push_back("NO");

    }

    for (string s : res) cout << s << '\n';

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