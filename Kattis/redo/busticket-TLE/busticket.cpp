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

ll bSearchNearestHigher(ll target, vector<ll> v,ll start, ll end){
    if(v[start]>=target) return start;
    if(v[end] < target) return -1;
    ll halfWay = start + (end-start)/2;
    if(v[halfWay]<target)return bSearchNearestHigher(target,v,halfWay+1,end);
    return bSearchNearestHigher(target,v,start,halfWay);
}

unordered_map<int, ll> memo;

ll minimised(int currIndex, vector<ll>v,ll s,ll p,ll m){
    if(memo.count(currIndex)>0)return memo[currIndex];
    if(currIndex>v.size()-1){
        return 0;
    }
    ll nextInd = bSearchNearestHigher(v[currIndex]+m,v,currIndex+1,v.size()-1);
    ll ans;
    if(nextInd==-1)ans= min(s+minimised(currIndex+1,v,s,p,m),p);
    else ans= min(s+minimised(currIndex+1,v,s,p,m),p+minimised(nextInd,v,s,p,m));
    memo[currIndex]=ans;
    return ans;
}

void solve() {
    ll s,p,n,m,x;
    cin>>s>>p>>m>>n;
    vector<ll> v;
    ITER(n){
        cin>>x;
        v.push_back(x);
    }
    cout<<minimised(0,v,s,p,m);
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