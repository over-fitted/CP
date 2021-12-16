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
    int n,m,a;
    ll total=0;
    cin>>n>>m;
    vector<pair<ll,vector<int>>> v;
    ITER(n){
        vector<int> innerV;
        int k,x;
        ll prize;
        cin>>k;
        ITER(k){
            cin>>x;
            innerV.push_back(x);
        }
        cin>>prize;
        v.push_back(pair(prize,innerV));
    }
    map<int, int>freq;
    ITER(m){
        cin>>a;
        freq[i+1]=a;
    }
    
    for(pair<ll,vector<int>> p:v){
        int sets=MAX_N;
        for(int target:p.second){
            sets = min(sets,(int)freq[target]);
        }
        total+=p.first * sets;
    }
    cout<<total<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}