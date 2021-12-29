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
    int n;
    float curr,des;
    string ing;
    float weight,prop;
    vector<pair<string, float>> v;
    cin>>n>>curr>>des;
    float ratio = des/curr;
    double bench;
    ITER(n){
        cin>>ing>>weight>>prop;
        if(prop==100)bench=weight*ratio;
        v.push_back(pair<string,float>(ing, prop));
    }
    for(auto p:v){
        cout<<p.first<<" "<<p.second/100*bench<<"\n";
    }
    cout<<string(40,'-')<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    cout<<setprecision(1)<<fixed;
    for (int t = 1; t <= tc; t++) {
        cout << "Recipe # " << t << "\n";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}