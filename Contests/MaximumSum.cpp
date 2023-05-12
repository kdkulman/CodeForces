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
void solve(string s, vector<string>& res){
    unordered_map<char, int> map;
    for (char c : s) map[c]++;
    int charsWithLeastTwo = 0;
    for (const auto& pair : map) {
        if (pair.second >= 2) charsWithLeastTwo++;
        if (charsWithLeastTwo >= 2) break;
    }
    if (charsWithLeastTwo >= 2) res.push_back("YES");
    else res.push_back("NO");


}

int main() {
    int t;

    cin >> t;
    vector<long long> res; 
    while(t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        long long sum = 0, best = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++) {
            sum -= a[n-1-i];
        }

        for (int i = 0; i <= k; i++) {
            best = max(best, sum);
            sum -= a[i*2];
            sum -= a[i*2 + 1];
            sum += a[n-k+i];
        }
        res.push_back(best);
    }

    for (long long s : res) cout << s << '\n';

}   



/*
6
5 1
2 5 1 10 6
5 2
2 5 1 10 6
3 1
1 2 3
6 1
15 22 12 10 13 11
6 2
15 22 12 10 13 11
5 1
999999996 999999999 999999997 999999998 999999995


*/
