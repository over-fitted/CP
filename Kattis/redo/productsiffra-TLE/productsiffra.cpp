//notes:
//  somehow using DAT vector and c array is worse than map
//  wonder if !=0 is faster than count for key check

#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
typedef vector<int> vi;
typedef pair<int,int> pi;
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define REP(i,a,b) for (ll i = a; i < b; i++)
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
// const ll sz = pow(10,6);
// int fMap[sz]={};
unordered_map<ll,ll> fMap;
ll f(ll x){
    if(fMap[x]!=0)return fMap[x];
    // if(fMap.count(x)>0)return fMap[x];
    if(x<10)return x;
    ll ans=1;
    if(x%10!=0){
        ans=x%10;
    }
    ans = ans * f(x/10);
    fMap[x]=ans;
    return ans;
}

unordered_map<ll,ll> dpMap;
// int dpMap[sz]={};
ll digitProduct(ll x){
    if(x<10){
        return x;
    }
    if(dpMap[x]!=0)return dpMap[x];
    ll ans = digitProduct(f(x));
    dpMap[x]=ans;
    return ans;
}

void solve() {
    ll l,r;
    cin>>l>>r;
    vector<int> a(10);
    REP(i,l,r+1){
        a[digitProduct(i)]++;
    }
    REP(i,1,10){
        cout<<a[i]<<" ";
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