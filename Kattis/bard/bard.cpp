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
    int song = 0;
    int n,e,pax,pers;
    cin>>n;cin>>e;
    map<int, set<int>>m;
    ITER(e){
      set<int> s;
      cin>>pax;
      ITER(pax){
        cin>>pers;
        s.insert(pers);
      }
      if(*s.begin()==1){
        for(int x:s){
          m[x].insert(song);
        }
        song++;
      }
      else {
        set<int> songsKnown;
        for(int x:s){
          songsKnown.insert(m[x].begin(),m[x].end());
        }
        
        for(int x:s){
          m[x].insert(songsKnown.begin(),songsKnown.end());
        }
      }
    }

    for(auto p:m){
      bool knowAll=true;
      ITER(song){
        if(p.second.count(i)==0){
          // cout<<p.second;
          knowAll=false;
          break;
        }
      }
      if(knowAll)cout<<p.first<<"\n";
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