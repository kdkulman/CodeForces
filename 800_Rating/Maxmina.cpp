#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
//https://codeforces.com/problemset/problem/1746/A
using namespace std;

int main() {
    int t;

    cin >> t;
    vector<string> res; 
    while(t--) {
        int n, k;
        cin >> n >> k;
        int ones = 0, zeros = 0;
        while (n--) {
            int temp;
            cin >> temp;
            if (temp == 1) ones++;
            else zeros++;
        }

        int length = ones+zeros;

        if (ones >= 1) res.push_back("YES");
        else res.push_back("NO");


//         3 2
//         0 0 0
    
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