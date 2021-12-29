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

vector<string> split(string s, string delimiter){
    vector<string> ans;
    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);

        ans.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    ans.push_back(s);
    return ans;
}

void solve() {
    int r,n;
    cin>>r;
    string sven,s;
    cin>>sven;
    cin>>n;
    map<char,char> beats={
        {'S','P'},
        {'P','R'},
        {'R','S'}
    };
    vector<string> v;
    ITER(n){
        cin>>s;
        v.push_back(s);
    }
    int total=0;
    ITER(n){
        REP(j,0,r){
            if(v[i][j]==sven[j])total++;
            if(beats[sven[j]]==v[i][j])total+=2;
        }
    }
    cout<<total<<"\n";
    total=0;
    ITER(r){
        unordered_map<char,int>m;
        REP(j,0,n){
            m[v[j][i]]++;
        }
        total+=max(m['S']+2*m['P'],max(m['P']+2*m['R'],m['R']+2*m['S']));
    }
    cout<<total;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    // cout<<setprecision(10)<<fixed;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}