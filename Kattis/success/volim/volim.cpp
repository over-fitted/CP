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

int dec(int x){
    if(x==8){
        return 1;
    }
    return x+1;
}

void solve() {
    int init,qns;
    int time;char corr;
    int total=210;
    string buf;
    cin>>init;
    cin>>qns;
    ITER(qns){
        cin>>time;cin>>corr;
        total-=time;
        if(total<=0){
            cout<<init;break;
        }
        if(corr=='T'){
            init=dec(init);
        }
    }
    while (cin>>buf);
    // while (cin >> x) {
    // }
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