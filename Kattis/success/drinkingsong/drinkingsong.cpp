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
    string y;
    string curr,next,nextNum;
    cin>>x;
    cin>>y;
    for (int i = x;i>0;i--){
        if(i>2){
            printf("%d bottles of %s on the wall, %d bottles of %s.\nTake one down, pass it around, %d bottles of %s on the wall.\n\n",i,y.c_str(),i,y.c_str(),i-1,y.c_str());
        }
        if(i==2){
            printf("%d bottles of %s on the wall, %d bottles of %s.\nTake one down, pass it around, %d bottle of %s on the wall.\n\n",i,y.c_str(),i,y.c_str(),i-1,y.c_str());
        }
        if(i==1){
            printf("%d bottle of %s on the wall, %d bottle of %s.\nTake it down, pass it around, no more bottles of %s.\n\n",i,y.c_str(),i,y.c_str(),y.c_str());
        }
    }
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
