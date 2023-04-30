#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <unordered_set>

//https://codeforces.com/problemset/problem/1607/B
using namespace std;

bool isEven(long long x) {
    if (x % 2 == 0) return true;
    return false;
}

int main() {
    int t;
    cin >> t; 
    vector<long long> res;
    while(t--) {
        long long x, n;
        cin >> x;
        cin >> n;

        if (n % 4 == 0){
            res.push_back(x);
            continue;
        }

        if (n % 2 == 0){
            if (isEven(x)) {
                x += 1;
            } else {
                x -= 1;
            }
            res.push_back(x);
            continue;
        }

        if (n % 2 == 1)res.push_back(x-n);

        while (n % 4 != 0) {

        }

        res.push_back(x);
    }

    for (long long i : res) cout << i << '\n';

}


/*
1
0 1

*/
