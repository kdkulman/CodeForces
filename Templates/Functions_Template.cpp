#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <unordered_set>

using namespace std;

//Split a string by char into a string array
vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    istringstream iss(str);
    string token;
    
    while (getline(iss, token, delimiter)) {
        tokens.push_back(token);
    }
    
    return tokens;
}

int main() {
    
    
}




/*

*/
