#include <bits/stdc++.h>

using namespace std;

int main(){
    // arrays
    int myArray[10] = { 0 }; // all elements 0
    vector<int> v(10,5); //size 10, init to 5

    //strings
    string a = "hatti";
    string b = a+a;
    string c = b.substr(3,4); //starting pos 3, length 4
    cout << c << "\n"; // tiva

    // SETS
    // ordered set more functions but O(logn) since use bbst. unordered O(1)
    // all elements are distinct i.e. count = [0,1]
    //      - otherwise use multiset - erase removes all instances
    set<int> s = {2,5,6,8};
    s.insert(3);
    cout << s.count(3) << "\n"; // 1
    s.erase(3);
    
    cout << s.size() << "\n"; // 4
    for (auto x : s) {
        cout << x << "\n";
    }

    // MAPS
    // like dictionary. unordered is O(1) but normal is bbst
    // check for existence using count(). regular lookup will initalise the key with default value i.e. 0
    map<string,int> m;
    m["banana"] = 3;
    cout << m["banana"] << "\n"; // 3

    // prints all values in map
    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }
}