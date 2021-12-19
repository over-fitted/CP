#include <bits/stdc++.h>

using namespace std;

int main() {
    // get whole line
    string x;
    getline(cin, x);

    // get just one char
    char c;
    cin.get(c);

    // if output number is in scientific notation i.e. 1.67854e+07, convert to long or use cout << fixed
    
    // long doesnt store decimals, use float for that

    // scanf needs to scan the newline as well
    // for printing long decimals: printf("%.6f",0-x/(y-1));
    // printf with string args need to use x.c_str(), but better use cout
    cout<<setprecision(15);

    // checks if next character is a letter
    isalpha(cin.peek());
}