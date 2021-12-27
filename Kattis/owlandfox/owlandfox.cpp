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
vector<int> digitsVec(T n){
    vector<int> v;
    while(n!=0){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    return v;
}

void solve() {
    ll x;
    cin>>x;
    vector<int> v = digitsVec(x);
    for(int i=v.size()-1;i>=0;i--){
        if(i==0 and v[i]==1){cout<<"0\n";return;}
        if(v[i]>0){
            v[i]--;
            break;
        }
    }
    ITER(v.size()){
        cout<<v[i];
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    // cout<<setprecision(10)<<fixed;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}