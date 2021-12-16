#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
typedef vector<int> vi;
typedef pair<int,int> pi;
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define REP(i,a,b) for (int i = a; i < b; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    deque<int> row1;
    deque<int> row2;
    deque<int> row3;
    deque<int> row4;
    int x, move, temp;
    REP(i, 0, 4) {
        cin >> x;
        row1.push_back(x);
    }
    REP(i, 0, 4) {
        cin >> x;
        row2.push_back(x);
    }
    REP(i, 0, 4) {
        cin >> x;
        row3.push_back(x);
    }
    REP(i, 0, 4) {
        cin >> x;
        row4.push_back(x);
    }
    cin >> move;
    if (move == 0) {
        int seen = 1;
        temp = row1.front();
        row1.pop_front();
        
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}