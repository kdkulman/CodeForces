#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int len;
    string s;
    cin >> len >> s;    
    string res = "";
    int z = 0, e = 0, r = 0, o = 0, n = 0;

    for (char c : s) {
        if (c == 'z') z++;
        if (c == 'e') e++;
        if (c == 'r') r++;
        if (c == 'o') o++;
        if (c == 'n') n++;
    }

    int ones = 0, zeros = 0;

    zeros = min(min(z, e), min(r, o));
    ones = min(min(o, n), e);

    for (int i = 0; i < ones; i++)
        cout << "1" << " ";

    for (int i = 0; i < zeros; i++)
        cout << "0" << " ";

    cout << res;
}

/*
    test case
    10
    nznooeeoer

    z - 1
    n - 2
    o - 3
    e - 3
    r - 1

    0
    1
    1

    
*/