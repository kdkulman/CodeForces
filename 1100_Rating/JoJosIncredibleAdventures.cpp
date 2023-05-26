#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;

//https://codeforces.com/problemset/problem/1820/B

int countConsecOnes(string s) {
    string currString = "";
    vector<string> arr;

    //split function
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            currString += "1";
        } else if (currString.size() > 0) {
            arr.push_back(currString);
            currString = "";
        } 
    }

    bool isCyclic = false;
    if (currString.size() > 0) {
        arr.push_back(currString);
        isCyclic = true;
    }

    if  (s[0] == '0') isCyclic = false;

    if (arr.size() == 0) return 0;
    if (arr.size() == 1) return arr[0].size();

    int consecOnes = 0;
    for (string theString : arr) {
        consecOnes = (consecOnes > theString.size()) ? consecOnes : theString.size();
    }

    if (arr[0].size() + arr[arr.size()-1].size() > consecOnes && isCyclic)
        consecOnes = arr[0].size() + arr[arr.size()-1].size();
    
    return consecOnes;
}

int main() {
    int t;

    cin >> t;
    vector<int> res; 
    while(t--) {
        string s;
        cin >> s;
        int numOfOnes = count(s.begin(), s.end(), '1');

        if (numOfOnes == s.size()) {
            res.push_back(numOfOnes*numOfOnes);
            continue;
        }

        int maxConsecOnes = countConsecOnes(s);
        if (maxConsecOnes == 0) res.push_back(0);
        else if (maxConsecOnes == 1) res.push_back(1);
        else res.push_back( (maxConsecOnes-1) * 2);
    }

    for (int s : res) {
        cout << s << '\n';
    }

}   

/*

 Input:
17
101110 
11001100
11101 
1111
11
11111
0
1
101
011110
101010
110011
0001
0000
0001111
110111011
0101



Output:
4
2
6
16
4
25
0
1
2
6
1
6
1
0
6
6
1



*/