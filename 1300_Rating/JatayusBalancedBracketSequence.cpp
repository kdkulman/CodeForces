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
//https://codeforces.com/problemset/problem/1726/C


int find(vector<int>& parents, int x) {
    if (parents[x] == x) return x;
    //Path compression
    //parents[x] = parents[parents[x]];
    return find(parents, parents[x]);
}

void join(vector<int>& parents, vector<int>& rank, int x, int y) {
    int rootX = find(parents, x);
    int rootY = find(parents, y);

    //Union by rank
 //   if (rank[rootX] > rank[rootY]) {
        parents[rootY] = rootX;
    // } else if (rank[rootY] > rank[rootX]) {
    //     parents[rootX] = rootY;
    // } else {
    //     parents[rootY] = rootX;
    //     rank[rootX]++;
    // }
}


int main() {
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        stack<int> stack;
        vector<int> parents(2*n);
        vector<int> rank(2*n, 0);

        for (int i = 0; i < 2*n; i++) {
            parents[i] = i;
        }

        vector<int> edges;
        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && s[i] == '(' && s[i-1] == ')') {
                join(parents, rank, i, i-1);
            }
            
            if (s[i] == ')') {
                int j = stack.top();
                join(parents, rank, j, i);
                stack.pop();
                if (stack.empty()) {
                    edges.push_back(j);
                    edges.push_back(i);
                }
            } else {
                stack.push(i);
            }
        }

        edges.push_back(2*n-1);
        int prev = 0;
        for (int e : edges) {
            join(parents, rank, e, prev);
            prev = e;
        }

        unordered_set<int> set;
        for (int i = 0; i < parents.size(); i++) 
            set.insert(find(parents, parents[i]));

        res.push_back(set.size());

        // cout << "[";
        // for (int i = 0; i < parents.size(); i++) {
        //     cout << parents[i] << " ";
        // }

        // cout << "]";

    }

    for (int i : res) cout << i << '\n';

}   

/*

input:
10
1
()
3
()(())
3
((()))
4
(())(())
2
()()
3
()()()
6
(())((()))()
9
(())(((())))(()())
3
(()())
4
(()()())

1
9
(())(((())))(()())

Output:
1
2
3
3
1
1
4
6
2
2


*/