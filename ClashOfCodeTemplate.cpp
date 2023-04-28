
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

#define min3(a, b, c) min(a, min(b, c));
#define c(c, s) for (char c : s)
#define r(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    vector<int> parents;
    vector<int> rank;
    string s = "kevin";

    cout << min3(12, 2, 3);
    cout << endl;
    for(c, s) {
        cout << c << endl;
    }

}
