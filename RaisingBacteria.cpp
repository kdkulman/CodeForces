//A. Raising Bacteria
//https://codeforces.com/problemset/problem/579/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int x;
    cin >> x;    
    int res = 0;
    for (int i = 0; i < 32; i++) 
        if ( (1 << i) & x) res++;

    cout << res;
}
