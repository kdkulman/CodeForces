#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
#include <unordered_map>

using namespace std;
//https://codeforces.com/problemset/problem/1033/B

bool isPrime(long long x) {
    long long n = sqrt(x)+1;
    while (n > 1) {
        if (x % n == 0) return true;
        n--;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<string> res; 
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if (a - b != 1) {
            res.push_back("NO");
            continue;
        }
        if(isPrime(a+b)) {
            res.push_back("NO");
        } else {
            res.push_back("YES");
        }
    }

    for (string s : res) {
        cout << s << '\n';
    }
}   

/*




    


*/