#include <bits/stdc++.h>
#define ITER(x) for (int i = 0; i < x; i++)
using namespace std;

string tolower(string x){
    std::transform(x.begin(), x.end(), x.begin(), [](unsigned char c){ return std::tolower(c); });
    return x;
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

// 1d array
template <typename T>
void printArr(T *arr, unsigned int n)
{
   int i;
   for (i = 0; i < n; i++)
     cout <<" "<< arr[i];
}


// 1d vector
template <typename T>
void printVec(vector<T> path){
    for (T i: path)
    std::cout << i << ' ';
    cout<<"\n";
}

template <typename T>
bool vecIsUnique(vector<T> v){
    unordered_set<T> s;
    for (T i: v){
        if(s.count(i)>0)return false;
        s.insert(i);
    }
    return true;
}

// 2d vector manipulation
template <typename T>
vector<vector<T>> transpose(vector<vector<T>> v){
    vector<vector<T>> ans(v[0].size(),vector<T>(v.size()));
    REP(i,0,v.size()){
        REP(j,0,v[0].size()){
            ans[j][i]=v[i][j];
        }
    }
    return ans;
}

template <typename T>
vector<vector<T>> rotateCounterClockwise(vector<vector<T>> v){
    ITER(v.size()){
        reverse(v[i].begin(),v[i].end());
    }
    return transpose(v);
}

template <typename T>
vector<vector<T>> rotateClockwise(vector<vector<T>> v){
    v=transpose(v);
    ITER(v.size()){
        reverse(v[i].begin(),v[i].end());
    }
    return v;
}

template <typename T>
vector<vector<T>> print2dVec(vector<vector<T>> v){
    REP(i,0,v.size()){
        REP(j,0,v[0].size()){
            cout<<v[i][j];
        }
        cout<<"\n";
    }
}

int main(){
    // arrays
    int myArray[10] = { 0 }; // all elements 0
    vector<int> v(10,5); //size 10, init to 5

    //iterating through a 3d array
    int A[5][5] = {};
    ITER((sizeof(A)/sizeof(*A))){
        for(auto b:A[i]){
            cout<<b;
        }
        cout<<"\n";
    }

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