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

template <typename T>
vector<vector<T>> transpose(vector<vector<T>> v){
    vector<vector<T>> ans(v[0].size(),vector<T>(v.size()));
    REP(i,0,v.size()){
        REP(j,0,v[0].size()){
            ans[j][i]=v[i][j];
        }
    }
    return ans;
}

template <typename T>
vector<vector<T>> rotateClockwise(vector<vector<T>> v){
    v=transpose(v);
    ITER(v.size()){
        reverse(v[i].begin(),v[i].end());
    }
    return v;
}

int nearestSquare(int n){
    return pow(ceil(sqrt(n)),2);
}

void solve() {
    string x;
    cin>>x;
    int sz = nearestSquare(x.size());
    x+=string((sz-x.size()),'*');
    sz=sqrt(sz);
    string::iterator it = x.begin();
    vector<vector<char>> v(sz,vector<char>(sz));
    REP(i,0,sz){
        REP(j,0,sz){
            v[i][j]=*it;
            ++it;
        }
    }
    vector<vector<char>> v2=rotateClockwise(v);
    REP(i,0,sz){
        REP(j,0,sz){
            if(v2[i][j]!='*')cout<<v2[i][j];
        }
    }
    cout<<"\n";
    // REP(i,0,v.size()){
    //     REP(j,0,v[0].size()){
    //         if(v[i][j]!='*')cout<<v[i][j];
    //     }
    //     cout<<"\n";
    // }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}