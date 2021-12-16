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
#define ITER(x) for (int i = 0; i < x; i++)
#define elif else if

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    int n,r,k;
    cin>>n>>r>>k;
    // go up to office, then go to registration from office, then go home
    if(k+abs(r-k)>=n){
        cout<<k+abs(r-k)+r;
    }
    else {
        // go to office then registration is either both odd or both even, so can pad (padding always even)
        if(n%2==r%2){
            cout<<n+r;
            return;
        }
        // one odd and one even, need to pad one non-essential step
        cout<<n+r+1;
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