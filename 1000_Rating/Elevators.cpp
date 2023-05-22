#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
using namespace std;

//https://codeforces.com/problemset/problem/120/A

int main() {
    string door;
    int a;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> door >> a;
    if ( (door == "front" && a == 1) || (door == "back" && a == 2)){
        cout << "L";
    } else {
        cout << "R";
    }


}   

/*
	BACKDOOR 2

1	FRONTDOOR

front
1

front
2

back
1

back
2

output:
L
R
R
L


*/