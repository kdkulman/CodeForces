#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;

//https://codeforces.com/problemset/problem/610/A

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << 0;
        return 0;
    }
    double d = n;
    int res = ceil(d/4) - 1;
    cout << res;

}   

/*


*/