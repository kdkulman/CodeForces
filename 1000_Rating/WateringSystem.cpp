#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;

//https://codeforces.com/problemset/problem/967/B

int main() {
    double n, a, b;

    cin >> n >> a >> b;
    vector<double> array(n-1, 0); 
    double ithHole, sum = 0; 
    cin >> ithHole;
    sum+= ithHole;
    for (int i = 0; i < n-1; i++) {
        cin >> array[i];
        sum += array[i];
    }

    sort(array.begin(), array.end(), [](int a, int b) {
        return a > b; // Compare in descending order
    });

    long long holesBlocked = 0, i = 0;

    while ((ithHole*a) / sum < b) {
        sum -= array[i];
        i++;
        holesBlocked++;
    }

    cout << holesBlocked;

}   

/*



*/