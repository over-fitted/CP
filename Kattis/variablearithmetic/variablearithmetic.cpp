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

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void solve() {
    string s;
    unordered_map<string, int> m;
    while(getline(cin,s) and s!="0"){
      vector<string> v = split(s," ");
      if(v.size()==3 and v[1]=="="){
        m[v[0]]=stoi(v[2]);
      }
      else {
        int num=0;
        string unCalc="";
        for(string x:v){
          if(x=="+")continue;
          elif(is_number(x))num+=stoi(x);
          elif(m.count(x)>0)num+=m[x];
          else unCalc+=" + "+x;
        }
        if(num==0)cout<<unCalc.substr(3)<<"\n";
        else cout<<num<<unCalc<<"\n";
        }
      
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