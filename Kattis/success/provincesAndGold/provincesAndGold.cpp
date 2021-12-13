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
    int g,s,c,t;
    scanf("%d %d %d\n",&g,&s,&c);
    t=g*3+s*2+c;
    if(t>=8)printf("Province or Gold\n");
    else if(t>=6)printf("Duchy or Gold\n");
    else if(t>=5)printf("Duchy or Silver\n");
    else if(t>=3)printf("Estate or Silver\n");
    else if(t>=2)printf("Estate or Copper\n");
    else printf("Copper\n");
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