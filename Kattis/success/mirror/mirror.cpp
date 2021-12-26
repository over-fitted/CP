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

// 2d vector manipulation
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
vector<vector<T>> rotateCounterClockwise(vector<vector<T>> v){
    ITER(v.size()){
        reverse(v[i].begin(),v[i].end());
    }
    return transpose(v);
}

template <typename T>
vector<vector<T>> rotateClockwise(vector<vector<T>> v){
    v=transpose(v);
    ITER(v.size()){
        reverse(v[i].begin(),v[i].end());
    }
    return v;
}

template <typename T>
void print2dVec(vector<vector<T>> v){
    REP(i,0,v.size()){
        REP(j,0,v[0].size()){
            cout<<v[i][j];
        }
        cout<<"\n";
    }
}

void solve() {
    // while (cin >> x) {
    // }
    int x,y;
    string inp;
    cin>>x>>y;
    vector<vector<char>> v(x,vector<char>(y));
    cin.ignore();
    ITER(x){
        cin>>inp;
        REP(j,0,y){
            v[i][j]=inp[j];
        }
    }
    v=rotateClockwise(rotateClockwise(v));
    print2dVec(v);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Test " << t << "\n";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}