#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
//https://codeforces.com/problemset/problem/1721/B
using namespace std;
 
int main() {
    int t;
    cin >> t; 
    vector<int> res;
    while(t--) {
        
        int n,m,sx,sy,d;
        cin >> n >> m >> sx >> sy >> d;
        bool blockedX = ((sx-d <= 1) && (sx+d >= n));
        bool blockedY = ((sy-d <= 1) && (sy+d >= m));
 
        if (blockedX || blockedY){
            res.push_back(-1);
        } else {
            res.push_back(n+m-2);
        }

    }
 
    for (int s : res) cout << s << '\n';
 
}   