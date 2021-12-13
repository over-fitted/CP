#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
typedef vector<int> vi;
typedef pair<int,int> pi;
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define REP(i,a,b) for (ll i = a; i < b; i++)
#define elif else if

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

double price(ll k,int p,int a,int b,int c,int d){
    return p * (sin(a*k+b)+cos(c*k + d) + 2);
}

void solve() {
    cout<<setprecision(15);
    int p,a,b,c,d;
    ll n;
    double next,max,dec=0;
    scanf("%d %d %d %d %d %llu",&p,&a,&b,&c,&d,&n);
    max=price(1,p,a,b,c,d);
    for(ll i=2;i<=n;i++){
        next = price(i,p,a,b,c,d);
        if ((max-next) > dec) dec = (max-next);
        if(next>max)max=next;
    }
    cout<< dec<<"\n";
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