//https://codeforces.com/problemset/problem/1811/B
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        
    }

}

void answer() {
    int x1, y1, x2, y2, n;

    cin >> n >> x1 >> y1 >> x2 >> y2;
    x1--, y1--, x2--, y2--;

    vector<vector<int>> grid(n, vector<int>(n, 0)); 
    grid[x2][y2] = 2;
    grid[x1][y1] = 1;

}

/*
    test case
    

    
*/