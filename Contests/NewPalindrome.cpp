#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
#include <unordered_map>

using namespace std;
void solve(string s, vector<string>& res){
    unordered_map<char, int> map;
    for (char c : s) map[c]++;
    int charsWithLeastTwo = 0;
    for (const auto& pair : map) {
        if (pair.second >= 2) charsWithLeastTwo++;
        if (charsWithLeastTwo >= 2) break;
    }
    if (charsWithLeastTwo >= 2) res.push_back("YES");
    else res.push_back("NO");


}

int main() {
    int t;

    cin >> t;
    vector<string> res; 
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (n <= 3) res.push_back("NO");
        else solve(s, res);


    }

    for (string s : res) cout << s << '\n';

}   



/*

5
codedoc
gg
aabaa
pomop
abba

YES
NO
NO
YES
YES

*/
