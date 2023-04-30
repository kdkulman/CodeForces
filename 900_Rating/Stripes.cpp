//https://codeforces.com/problemset/problem/1742/C
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
char checkRows();


int main() {
    int t;
    cin >> t; 
    vector<char> res;
    for (int i = 0; i < t; i++) {
        char c = checkRows();
        res.push_back(c);
        res.push_back('\n');          
    }

    for (char c : res) cout << c;
}

char checkRows() {
    int maxReds = 0;

    for (int row = 0; row < 8; row++) {
        string s; 
        cin >> s;
        int reds = 0;

        for (int col = 0; col < 8; col++) {
            if (s[col] == 'R') reds++;
        }
        maxReds = max(maxReds, reds);
    }
    if (maxReds == 8) return 'R';
    return 'B';
}


/*
    
4


....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...


RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB


RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB


........
........
........
RRRRRRRR
........
........
........
........
    
*/