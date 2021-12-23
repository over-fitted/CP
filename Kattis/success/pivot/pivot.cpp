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
    ll n,ans=0;
    int x;
    cin>>n;
    vector<int> a;
    vector<int> cmin(n);
    vector<int> cmax(n);
    ITER(n){
        cin>>x;
        a.push_back(x);
    }
    int mini,maxi;
    mini = -MAX_N;
    maxi=MAX_N;
    ITER(n){
        mini=max(mini,a[i]);
        cmin[i]=mini;
        maxi=min(maxi,a[n-i-1]);
        cmax[n-i-1]=maxi;
    }
    // for(vi::iterator it = a.begin();it!=a.end();++it){
    //     x=min(x,*it);
    //     cmin.push_back(x);
    // }
    // for(ll i=n-1;i>=0;i--){
    //     x=max(x,a[i]);
    //     cmax[i]=x;
    // // }
    ITER(n){
        if(a[i]>=cmin[i] and a[i]<=cmax[i]){
            ans++;
        }
    }
    cout<<ans;
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