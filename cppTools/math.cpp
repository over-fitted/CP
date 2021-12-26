#include <bits/stdc++.h>

using namespace std;
#define ll long long

//TRIGO
// NOTE: NEED RADIANS, DONT FORGET TO CHECK
double toRad(double x){
    return 2*M_PI * (x / 360);
}

ll APSum(ll start, ll interval, ll numberOfEle){
    return (numberOfEle/2.0)*(2*start + (numberOfEle-1)*interval);
}

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

template <typename T>
double eucliDist(T x1, T y1, T x2, T y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int bSearchNearestHigher(int target, vector<int> v,int start, int end){
    if(start > end) return -1;
    if(start == end) return start;
    int halfWay = start + (end-start)/2;
    if(v[halfWay]==target)return halfWay;
    else if(v[halfWay]<target)return bSearchNearestHigher(target,v,halfWay+1,end);
    else return bSearchNearestHigher(target,v,start,halfWay-1);
}

int main(){
    vector<int> v = {0, 1, 2, 30, 30, 32};
    std::cout<<bSearchNearestHigher(4,v,0,v.size()-1);
}