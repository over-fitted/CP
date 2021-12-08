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
  int depth, hor, dist;
  depth = hor = 0;
  string x;
  while (cin >> x) {
    cin >> dist;

    if (x == "forward") {
      hor += dist;
      continue;
    }

    if (x == "backward"){hor -=dist;continue;}
    if (x == "up"){depth-=dist;continue;}
    if (x == "down"){depth+=dist;continue;}
  }
  cout << depth * hor;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    solve();
}