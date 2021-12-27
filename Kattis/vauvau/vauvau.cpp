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

string attackers(int a,int b,int c, int d, int p){
    int att=0;
    if((p%(a+b))<=a and (p%(a+b))>0)att++;
    if((p%(c+d))<=c and (p%(c+d))>0)att++;
    return att==0?"none":att==1?"one":"both";
}

void solve() {
    int a,b,c,d;
    int p,m,g;
    cin>>a>>b>>c>>d;
    cin>>p>>m>>g;
    int att=0;
    cout<<attackers(a,b,c,d,p)<<"\n";
    cout<<attackers(a,b,c,d,m)<<"\n";
    cout<<attackers(a,b,c,d,g)<<"\n";
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