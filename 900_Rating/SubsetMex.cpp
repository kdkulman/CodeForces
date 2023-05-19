#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;

//https://codeforces.com/problemset/problem/1406/A

int main() {
    int t;

    cin >> t;
    vector<int> res; 
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(101, 0);
        while(n--) {
            int freq;
            cin >> freq;
            a[freq]++;
        }

        int mexA = 0, mexB = 0;
        for (int i = 0; i < 101; i++) {
            if (a[i] == 0) {
                mexA = i;
                break;
            }
            else a[i]--;
        }

        for (int i = 0; i < 101; i++) {
            if (a[i] == 0) {
                mexB = i;
                break;
            }
            else a[i]--;
        }
        int ans = mexA + mexB;
        res.push_back(ans);

    }

    for (int s : res) cout << s << '\n';

}   

/*


*/