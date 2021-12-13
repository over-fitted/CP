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
#define ITER(x) for (int hjasklASDF = 0; hjasklASDF < x; hjasklASDF++)
#define elif else if

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    int x;
    int TD=0;
    int LR=0;
    string y;
    cin>>x;
    ITER(x){
        cin>>y;
        LR += 2-(y[2]-'0'+y[3]-'0');
        TD += 2-(y[0]-'0'+y[1]-'0');
    }
    int ans=min(LR/2,TD/2);
    printf("%d %d %d\n", ans,TD-ans*2,LR-ans*2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}