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

//https://codeforces.com/problemset/problem/181/A

int main() {
    int m, n;
    char cell;
    cin >> n >> m;
    unordered_map<int, int> row;
    unordered_map<int, int> col;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++){
            cin >> cell;
            if (cell == '*'){
                row[i]++;
                col[j]++;
            }
        }
    }

    int min = INT_MAX;
    int res1 = 0, res2 = 0;
    for (const auto& pair : row) {
        if (pair.second < min) {
            min = pair.second;
            res1 = pair.first;
        }
    }

    min = INT_MAX;
    for (const auto& pair : col) {
        if (pair.second < min) {
            min = pair.second;
            res2 = pair.first;
        }
    }

    cout << res1 << " " << res2;
    

    //for (int s : res) cout << s << '\n';

}   

/*


*/