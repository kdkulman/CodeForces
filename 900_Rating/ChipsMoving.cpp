#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;


// https://codeforces.com/problemset/problem/1213/A
int main() {
    int n, odds = 0, evens = 0, i;

    cin >> n;
    vector<string> res; 
    while(n--) {
       cin >> i;
       if (i % 2 == 0) evens++;
       else odds++;
    }

    cout << min(evens, odds);

    //for (string s : res) cout << s << '\n';

}   

/*


*/