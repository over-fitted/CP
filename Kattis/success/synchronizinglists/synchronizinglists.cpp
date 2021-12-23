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
    while(cin>>n and n!=0){
        ll x;
        vector<ll> v1;
        vector<ll> vo;
        vector<ll> v2;
        unordered_map<ll,ll> ans;
        ITER(n){
            cin>>x;
            v1.push_back(x);
            vo.push_back(x);
        }
        ITER(n){
            cin>>x;
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ITER(n){
            ans[v1[i]]=v2[i];
        }
        for(auto x:vo){
            cout<<ans[x]<<"\n";
        }
        cout<<"\n";
    }   
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