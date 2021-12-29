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
    unordered_map<char, char> c;
    c['a'] = '2';
    c['b'] = '2';
    c['c'] = '2';
    c['d'] = '3';
    c['e'] = '3';
    c['f'] = '3';
    c['g'] = '4';
    c['h'] = '4';
    c['i'] = '4';
    c['j'] = '5';
    c['k'] = '5';
    c['l'] = '5';
    c['m'] = '6';
    c['n'] = '6';
    c['o'] = '6';
    c['p'] = '7';
    c['q'] = '7';
    c['r'] = '7';
    c['s'] = '7';
    c['t'] = '8';
    c['u'] = '8';
    c['v'] = '8';
    c['w'] = '9';
    c['x'] = '9';
    c['y'] = '9';
    c['z'] = '9';

    int n,ans=0;
    string s;
    vector<string> v;
    cin>>n;
    ITER(n){
        cin>>s;
        v.push_back(s);
    }
    cin>>s;
    for(string x:v){
        if(x.length()!=s.length())continue;
        bool can=true;
        ITER(x.length()){
            if(c[x[i]]!=s[i]){can=false;break;}
        }
        if(can)ans++;
    }
    cout<<ans;
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