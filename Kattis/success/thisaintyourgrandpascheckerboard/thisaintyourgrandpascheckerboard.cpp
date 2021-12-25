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
    int n;
    string x;
    vector<string> v;
    bool corr=true;
    cin>>n;
    ITER(n){
        cin>>x;
        if(x.find("BBB")!=string::npos or x.find("WWW")!=string::npos){
            corr=false;
        }
        int w,b;
        w=b=0;
        ITER(x.length()){
            if(x[i]=='W')w++;
            else b++;
        }
        if(w!=b)corr=false;
        v.push_back(x);
    }
    ITER(n){
        int w,b;
        w=b=0;
        REP(j,0,n){
            if(j<=n-3){
                if(v[j][i]==v[j+1][i] and v[j+1][i]==v[j+2][i])corr=false;
            }
            if(v[j][i]=='W')w++;
            else b++;
        }
        if(b!=w)corr=false;
    }
    cout<<corr?1:0;
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