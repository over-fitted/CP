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
        map<string, vector<string>>m;
        string x;
        cin.ignore();
        ITER(n){
            getline(cin,x);
            vector<string> v=split(x," ");
            REP(i,1,v.size()){
                if(m.find(v[i])==m.end()){
                    vector<string> v1;
                    m[v[i]]=v1;
                }
                m[v[i]].push_back(v[0]);
            }
        }
        for(auto p:m){
            vector<string> a=p.second;
            sort(a.begin(),a.end());
            cout<<p.first<<" ";
            for(string s:a){
                cout<<s<<" ";
            }
            cout<<"\n";
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