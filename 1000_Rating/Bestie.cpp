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
//https://codeforces.com/problemset/problem/1732/A

//REDO, DID NOT UNDERSTAND THIS PROBLEM!! -6/20/23

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

int main() {
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        int p=0,ans=3;
        for(int i=1; i<=n; i++) {
            cin >> a[i];
            p = gcd(p, a[i]);
        }
        if(p==1) ans=0;

        for(int i=1; i<=n; i++){
            if(gcd(i,p)==1){
                ans = min(ans, n-i+1);
            }
        }
        
        res.push_back(ans);
    }

    for (int i : res) {
        cout << i << " " << '\n';
    }
}   



/*

input:


output:






*/
