//https://codeforces.com/problemset/problem/1490/C
//Sum of Cubes

#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> parents;
    vector<int> rank;
}

class UnionFind {


    private:
        vector<int> parents;
        vector<int> rank;

    public:
        UnionFind(int n) {
            parents.resize(n);
            rank.resize(n);
            for (int i = 0; i < n; i++) {
                parents[i] = i;
                rank[i] = 0;
            }
        }

        int find(int x) {
            if (parents[x] == x) return x;
            return parents[x] = find(parents[x]);
        }

        void unite(int x, int y) {
            int xRoot = find(x);
            int yRoot = find(y);
            if (xRoot == yRoot) return;
            if (rank[xRoot] < rank[yRoot]) {
                parents[xRoot] = yRoot;
            } else if (rank[xRoot] > rank[yRoot]) {
                parents[yRoot] = xRoot;
            } else {
                parents[yRoot] = xRoot;
                rank[xRoot]++;
            }
        }

        bool same(int x, int y) {
            return find(x) == find(y);
        }
};
