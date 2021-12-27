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
    int total=0;
    vector<int> d;
    int x;
    ITER(9){
        cin>>x;
        total+=x;
        d.push_back(x);
    }
    int diff = total-100;
    // cout<<"diff: "<<diff<<"\n";
    pair<int, int> p;
    REP(i,0,9){
        REP(j,i+1,9){
            if(d[i]+d[j]==diff){
                p=pi(i,j);
                break;
            }
        }
    }
    // cout<<"pair: "<<p.first<<" "<<p.second<<"\n";
    // cout<<"ans:\n";
    ITER(9){
        if(i!=p.first and i!=p.second)cout<<d[i]<<"\n";

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