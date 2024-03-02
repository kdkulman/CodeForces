#include <string>
#include <algorithm>
#include <unordered_map>
#include <stack>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_map<string, int> ages_map;
vector<string> names = {"Eevee", "Squirrel", "Jesus", "Banana", "Kevin" };
bool compare(string a, string b) {
    if (ages_map[a] <= ages_map[b]) return true;
    return false;
}

int main() {

    ages_map["Kevin"] = 26;
    ages_map["Eevee"] = 24;
    ages_map["Banana"] = 1;
    ages_map["Jesus"] = 2023;
    ages_map["Squirrel"] = 24;

    for (const auto& name : names) 
        cout << name << '\n';

    cout << '\n' << "Sorted:" << '\n';

    //Higher Order Function Comparator
    //sort(names.begin(), names.end(), compare);

    //Lambda  Comparator
    sort(names.begin(), names.end(), [] (string a, string b){
        return ages_map[a] < ages_map[b];
    });

    for (const auto& name : names) 
        cout << name << '\n';
}