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

double average(vector<ll> x, int avoid){
    double ans=0;
    int done=0;
    ITER(x.size()){
        if(i!=avoid){ans+=x[i]*pow(4/5.0, done);done++;}
    }
    return ans/5;
}

void solve() {
    int n;
    ll score;
    double ans=0;
    vector<ll> v;
    cin>>n;
    ITER(n){
        cin>>score;
        v.push_back(score);
        ans+=score*pow(4/5.0, i);
    }
    cout<<ans/5<<"\n";
    double cumu=0;
    ITER(n){
        cumu+=average(v,i);
    }
    cout<<cumu/n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    cout<<setprecision(10);
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}