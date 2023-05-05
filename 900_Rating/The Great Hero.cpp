#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>

//https://codeforces.com/problemset/problem/1480/B
using namespace std;

int main() {
    int t;

    cin >> t; 
    vector<string> res;
    while(t--) {
        double pAtk, pHp, n;

        cin >> pAtk >> pHp >> n;
        vector<double> mAtk(n), mHp(n), damageCost(n);
        
        for (int i = 0; i < n; i++) cin >> mAtk[i];
        for (int i = 0; i < n; i++) cin >> mHp[i];
    
        for (int i = 0; i < n; i++) damageCost[i] = ceil(mHp[i]/pAtk) * mAtk[i];

        int max = -1, maxIndex = 0;
        for (int i = 0; i < n; i++) {
            if (damageCost[i] > max){
                max = damageCost[i];
                maxIndex = i;
            }
        }
        // cout << "damage cost array: ";
        // for (double i : damageCost) cout << i << " ";
        bool dies = false;

        for (int i = 0; i < damageCost.size(); i++) {
            if (i == maxIndex) continue;
            pHp -= damageCost[i];
            if (pHp <= 0) {
               dies = true;
               break;
            }
        }

        if (dies) {
            res.push_back("NO");
            continue;
        }

        int roundsForHeroToDie = ceil(pHp/mAtk[maxIndex]);
        int roundsForMonsterToDie = ceil(mHp[maxIndex]/pAtk);

        if (roundsForHeroToDie >= roundsForMonsterToDie){
            res.push_back("YES");
        } else {
            res.push_back("NO");
        }

    }

    for (string s : res) cout << s << '\n';

}   

/*

1
999999 1000000 1
1000000
1000000 

*/