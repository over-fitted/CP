#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int x;
    int sum = 0;
    int newSum = 0;
    int inc = 0;
    deque<int> a;
    for (int i = 0; i < 3; i++) {
      cin >> x;
      sum += x;
      a.push_back(x);
    }
    while (cin >> x) {
      a.push_back(x);
      newSum = sum + x - a.front();
      a.pop_front();
      if (newSum > sum) {
        inc++;
      }
    }
    cout << inc;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    solve();
}