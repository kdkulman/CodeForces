#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
//https://codeforces.com/problemset/problem/96/A
int main() {
    string s;
    cin >> s;    
    int res = 0;
    char p = '1';
    for (char c : s) {
        if (c == p) {
            res++;
        } else if (c != p) {
            res = 1;
        }
        p = c;
        if (res >= 7) break;
    }

    string answer = (res >= 7) ? "YES" : "NO";
    cout << answer;
}

/*
    

    
*/