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
#define ITER(x) for (ll i = 0; i < x; i++)
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
    ll n,m,x;
    cin>>n>>m;
    set<int> s;
    vector<int> v;
    ITER(n){
      s.insert(i+1);
    }
    ITER(m){
      cin>>x;
      s.erase(x);
      v.push_back(x);
    }
    int pos = 0;
    for (auto it=s.begin();it!=s.end();++it){
      while(pos<v.size()){
        if(v[pos]>*it){
          cout<<*it<<"\n";
          break;
        }
        cout<<v[pos]<<"\n";pos++;
      }
      if(pos==v.size()){
        cout<<*it<<"\n";
      }
    }
    while(pos<v.size()){
      cout<<v[pos]<<"\n";pos++;
    }
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