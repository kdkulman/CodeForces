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
        long long n;
        cin >> n;
        vector<long long> a(n), contrast(n), shortest(n, LLONG_MAX);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        //determine contrast of a
        long long contrastOfA = 0;
        for (int i = 0; i < n-1; i++) {
            contrastOfA += abs(a[i]-a[i+1]);
        }
       // cout << contrastOfA;

        contrast[0] = 0, shortest[0] = 1;
        for (int i = 1; i < n; i++) {
            long long maxContrast = 0;
            for (int j = i-1; j >= 0; j--) {
                long long currContrast = abs(a[i] - a[j]);
                if (currContrast >= contrast[j]) {
                    contrast[i] = max(currContrast, contrast[i]);
                    shortest[i] = min(shortest[j]+1, shortest[i]); 
                }
            }
        }

        long long ans = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            if (contrast[i] == contrastOfA)
                ans = min(ans, shortest[i]);
        }
        if (ans == LLONG_MAX) res.push_back(a.size());   
        else res.push_back(ans);       
    }

    for (long long s : res) cout << s << '\n';

}   



/*
1
5
1 3 3 3 7

1
7
5 4 2 1 0 0 4

*/
