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
    string s;
    cin>>s;
    if(s.substr(s.length()-2,2)=="ex"){
        cout<<s;
        cin>>s;
        cout<<s;
        return;
    }
    string end=s.substr(s.length()-1,1);
    if(end=="a" or end=="i" or end=="o" or end=="u"){
        cout<<s.substr(0,s.length()-1)<<"ex";
        cin>>s;
        cout<<s;
        return;
    }
    if(end=="e"){
        cout<<s;
        cout<<"x";
        cin>>s;
        cout<<s;
        return;
    }
    cout<<s<<"ex";
    cin>>s;
    cout<<s;
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