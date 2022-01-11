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

// Comparator function to sort pairs
// according to second value
bool cmp(pair<char, int>& a,
         pair<char, int>& b)
{
    return a.second < b.second;
}

void solve() {
    string x;
    cin>>x;
    // unordered_map<char, int> m;
    // vector<pair<char, int>> v;
    // for(char c:x){
    //   m[c]++;
    // }
    // for(auto p:m){
    //   v.push_back(p);
    // }
    // sort(v.begin(),v.end(),cmp);
    // int ans=0;
    // for(int i=0;i<v.size()-2;i++){
    //   ans+=v[i].second;
    // }
    // cout<<ans;
    vector<int> v(26);
    for(char c:x){
      v[c-'a']++;
    }
    sort(v.rbegin(),v.rend());
    int ans=0;
    for(int i=0;i<v.size()-2;i++){
      ans+=v[i];
    }
    cout<<x.length()-v[0]-v[1];
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