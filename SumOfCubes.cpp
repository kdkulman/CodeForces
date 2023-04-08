//https://codeforces.com/problemset/problem/1490/C
//Sum of Cubes

#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <limits.h>
#include <climits>

using namespace std;
bool binarySearch(long startA, long long midA, long endA, long startB, long long midB, long endB, long long x);

int main() {

    int t;
    string res;
    cin >> t;


    for (int i = 0; i < t; i++) {
        long long x;
        cin >> x;
        bool ans = binarySearch(1, 5000, 10001, 1, 5000, 10001, x);
        res += (ans) ? "YES\n" : "NO\n";
    }

    cout << res;
}

bool binarySearch(long startA, long long midA, long endA, long startB, long long midB, long endB, long long x) {

    //base case
    while (!(startA > endA || startB > endB)) {

        cout << midA << "^3 + " << midB << "^3 = " << x << "?\n";
        long long sumOfCubes = midA*midA*midA + midB*midB*midB;
        cout << "A: [" << startA << "," << endA << "]" << '\n';
        cout << "B: [" << startB << "," << endB << "]" << '\n';
        cout << sumOfCubes << '\n';

        if (sumOfCubes == x) return true;

        if (sumOfCubes > x) {
            if (midA >= midB) {
                endA = midA-1;
                midA = (startA+endA)/2;
            } else {
                endB = midB-1;
                midB = (startB+endB)/2;
            }
        } else {
            if (midA <= midB) {
                startA = midA+1;
                midA = (startA+endA)/2;
            } else {
                startB = midB+1;
                midB = (startB+endB)/2;
            }
        }
    }
    return false;
}


/*

Test cases:
1
35
*/