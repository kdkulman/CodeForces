//https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int res = 0;
    vector<int> list;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        list.push_back(score);
    }

    int kthValue = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] == 0) break;
        if (i == k-1) kthValue = list[i];
        if (i >= k && list[i] != kthValue) break;
        res++;
    }

    cout << res;
}

/*
    test case
    5 2
    
*/
