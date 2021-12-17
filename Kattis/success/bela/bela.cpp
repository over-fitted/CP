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
    int N;char B;
    string x;
    cin>>N>>B;
    unordered_map<int, int> m;
    int sum=0;
    m['A']=11;
    m['K']=4;
    m['Q']=3;
    m['J']=2;
    m['T']=10;
    m['9']=0;
    m['8']=0;
    m['7']=0;
   
    ITER(N*4){
        cin>>x;
        if(x[1]==B){
             if (x[0]=='J'){
                sum+=20;
                continue;
            }
            elif(x[0]=='9'){
                sum+=14;
                continue;
            }
        }
        sum+=m[x[0]];
    }
    cout<<sum;
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