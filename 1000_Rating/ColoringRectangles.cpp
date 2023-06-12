#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <numeric>
#include <unordered_set>
#include <stack>
using namespace std;
//https://codeforces.com/problemset/problem/1584/B


int oneAndXCase(int x) {
    if (x <= 3) return 1;
    if (x == 4) return 2;
    return oneAndXCase(x-3) + 1;
}

int oddAndOddCase(int x, int y) {
    return x * (y/2);
}

int evenAndOddCase(int even, int odd) {
    return even * (odd/2);
}

//8 4 is wrong atm
//evenAndOddCAse(8, 3) + 8
int evenAndEvenCase(int n, int m) {
    if (n == 2) {
        return oneAndXCase(m) + oneAndXCase(m);
    } else if (m == 2) {
        return oneAndXCase(n) + oneAndXCase(n);

    }
    if (n > m) {
        return evenAndOddCase(m, n-1) + oneAndXCase(m);
    } else {
        return evenAndOddCase(n, m-1) + oneAndXCase(n);
    }
}

int main() {
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int ans = 0;

        //1-x case
        if (n == 1){
            ans += oneAndXCase(m);
        } else if (m == 1){
            ans += oneAndXCase(n);
        }

        //odd-odd case
        else if (n % 2 == 1 && m % 2 == 1){
            ans += oddAndOddCase(m, n);
        }

        //even-odd
        else if (n % 2 == 1 || m % 2 == 1){
            if (n % 2 == 0){
                ans += evenAndOddCase(n, m);
            } else {
                ans += evenAndOddCase(m, n);
            }
        }

        //even-even case
        else if (n % 2 == 0 && m % 2 == 0) {
            ans += evenAndEvenCase(n, m);
        }
        
        res.push_back(ans);        
    }
    for (int i : res) cout << i << '\n';
}   



/*

input:
16
1 3
2 2
2 5
3 5
1 2
5 5
2 10
3 10
4 4
3 3
4 5
5 4
6 6
1 6
1 8
8 8

Output:
1
2
4
5
1
10
8
10
6
3
8
8
14
2
3
27

CASE 1 8 is failing

1AndX Case tests input:

16
1 2
1 3
1 4
1 5
1 6
1 7
1 8
1 9
2 1
3 1
4 1
5 1
6 1
7 1
8 1
9 1

1AndX Case tests output:
1
1
2
2
2
3
3
4
1
1
2
2
2
3
3
4

oddAndOddCase input:
10
3 3
5 5
7 7
9 9
3 5
3 7
3 9
5 7
5 9
5 11

oddAndOddCase output:
3
10
21
36
5
7
9
14
18
22

evenAndOddCase input:
10
2 3
2 5
2 7
3 2
5 2
7 2
8 9
9 10
10 11
100 3

evenAndOddCase output:
2
4
6
2
4
6
32
40
50
100

evenAndEvenCase input:
8
2 2
4 4
6 6
8 8
10 10
6 10
8 4
4 10

evenAndEvenCase output:
2
6
14
27
44
24

4
8 4
10 4
4 8
4 10

2
8 4
4 8



*/