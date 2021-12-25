#include <bits/stdc++.h>
#define ITER(x) for (int i = 0; i < x; i++)
using namespace std;

int sumOfDigits(int n){
    return n==0?0:n%10+sumOfDigits(n/10);
}

template <typename T>
vector<int> digitsVec(T n){
    vector<int> v;
    while(n!=0){
        v.push_back(n%10);
        n/=10;
    }
    return v;
}

string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

string a=toBinary(12);
cout<<stoi(a,0,2);