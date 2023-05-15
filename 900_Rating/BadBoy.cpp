#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
//https://codeforces.com/problemset/problem/1537/B
using namespace std;
 
int main() {
    int t;
    cin >> t; 
    vector<vector<long long>> res;
    while(t--) {
        long long n, m, i, j;
        
        cin >> n >> m >> i >> j;
        //Choose furthest corner
        long long c1 = abs(i-1)+abs(j-1);//top left
        long long c2 = abs(i-1)+abs(j-m);//top right
        long long c3 = abs(i-n)+abs(j-1);//bottom left
        long long c4 = abs(i-n)+abs(j-m);//bottom right

        long long yoyo1Dist = max(c1, max(c2, max(c3, c4)));
        vector<long long> yoyo1(2);

        if (yoyo1Dist == c1)  yoyo1 = {1, 1};
        if (yoyo1Dist == c2)  yoyo1 = {1, m};
        if (yoyo1Dist == c3)  yoyo1 = {n, 1};
        if (yoyo1Dist == c4)  yoyo1 = {n, m};

        i = yoyo1[0], j = yoyo1[1];
        long long cc1 = abs(i-1)+abs(j-1);//top left
        long long cc2 = abs(i-1)+abs(j-m);//top right
        long long cc3 = abs(i-n)+abs(j-1);//bottom left
        long long cc4 = abs(i-n)+abs(j-m);//bottom right

        long long yoyo2Dist = max(cc1, max(cc2, max(cc3, cc4)));

        vector<long long> yoyo2(2);

        if (yoyo2Dist == cc1)  yoyo2 = {1, 1};
        if (yoyo2Dist == cc2)  yoyo2 = {1, m};
        if (yoyo2Dist == cc3)  yoyo2 = {n, 1};
        if (yoyo2Dist == cc4)  yoyo2 = {n, m};

        res.push_back({yoyo1[0], yoyo1[1], yoyo2[0], yoyo2[1]});
    }
 
    for (vector<long long> list : res) {
        for (long long i : list)
            cout << i << " ";
        cout << '\n';

    }
}   