#include <bits/stdc++.h>

using namespace std;

//TRIGO
// NOTE: NEED RADIANS, DONT FORGET TO CHECK
double toRad(double x){
    return 2*M_PI * (x / 360);
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

template <typename T>
double eucliDist(T x1, T y1, T x2, T y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}