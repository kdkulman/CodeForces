#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
//https://codeforces.com/problemset/problem/1792/A
using namespace std;

int main() {
    int t;

    cin >> t;
    vector<int> res; 
    while(t--) {
        int n;
        cin >> n;
        int N = n;
        int extraDamage = 0;
        int killedByExtraDamage = 0;
        vector<int> monsters;
        while(n--) {
            int monster = 0;
            cin >> monster;

            // if (monster == 1) extraDamage++;
            // else 
            // else if (monster - extraDamage <= 0) {
            //     extraDamage -= monster;
            //     killedByExtraDamage++;
            // }

        }

        res.push_back(N-killedByExtraDamage);


    }

    for (int s : res) cout << s << '\n';

}   

/*

1
9
15 3 30 1 40 1 22 45 1

1
10
2 2 2 1 1 1 1 1 1
output: 6

1
3
3 1 1 1

*/