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
#define elif else if

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int ha(char a){
    if(a=='A') {
        return 1;
    }
    if(a=='T'){
        return 10;
    }
    if(a=='J'){
        return 11;
    }
    if(a=='Q') {
        return 12;
    }
    if(a=='K'){
        return 13;
    }
    return a - '0';
}

void solve() {
    char x,d;
    int a[14] = {};
    REP(i,0,4){
        scanf("%c%c ",&x,&d);
        a[ha(x)]++;
    }
    scanf("%c%c",&x,&d);
    a[ha(x)]++;
    int top=0;
    for(int x:a){
        if (x>top)top=x;
    }
    cout<<top;
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