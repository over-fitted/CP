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
    int r,c;
    char x;
    cin>>r>>c;
    int A[r][c];
    int ans[5]={};
    ITER(r){
        REP(j,0,c){
            cin >> x;
            A[i][j] = x=='#' ? -1:x=='X'?1:0;
        }
    }
    REP(i,0,r-1){
        REP(j,0,c-1){
            if(A[i][j]==-1 or A[i+1][j]==-1 or A[i][j+1]==-1 or A[i+1][j+1]==-1){
                continue;
            }
            else {
                ans[A[i][j]+A[i+1][j]+A[i][j+1]+A[i+1][j+1]]+=1;
            }
        }
    }
    ITER(5){
        cout<<ans[i]<<"\n";
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