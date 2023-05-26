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

//https://codeforces.com/problemset/problem/1399/C


int main() {
    int t;

    cin >> t;
    vector<int> res; 
    while(t--) {
        int n, maxElement = 0;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            maxElement = max(maxElement, w);
            a.push_back(w);
        }

        int bestMax = 0;
        for (int w = 1; w <= 100; w++) {
            int currMax = 0;
            unordered_map<int, int> map;
            for (int j = 0; j < n; j++) {
                if (map.count(a[j]) > 0 && map[a[j]] > 0) {
                    map[a[j]]--;
                    currMax++;
                } else if (w - a[j] <= 0) {
                    continue;
                } else {
                    map[w - a[j]]++;
                }
            }

            bestMax = max(currMax, bestMax);
            // cout << "map:" << '\n';
            // for (const auto& pair : map) {
            //     cout << pair.first << ":" << pair.second << '\n';
            // }
        }

        res.push_back(bestMax);
    }

    for (int s : res) {
        cout << s << '\n';
    }

}   

/*

1
5
1 2 3 4 5



*/