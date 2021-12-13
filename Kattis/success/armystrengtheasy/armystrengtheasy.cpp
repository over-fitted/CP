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



void solve() {
    int numG,numM;
    ll x;
    vector<ll> G;
    vector<ll> M;
    cin>>numG>>numM;
    REP(i,0,numG){
        cin>>x;
        G.push_back(x);
    }
    REP(i,0,numM){
        cin>>x;
        M.push_back(x);
    }
    sort(G.begin(),G.end(),greater<ll>());
    sort(M.begin(),M.end(),greater<ll>());
    while(!G.empty() and !M.empty()){
        if(G.back()>M.back()){
            M.pop_back();
        }
        elif(M.back()>G.back()){
            G.pop_back();
        }
        else{
            M.pop_back();
        }
    }
    if(G.empty())cout<<"MechaGodzilla"<<"\n";
    elif(M.empty())cout<<"Godzilla\n";
    else cout<<"uncertain\n";
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