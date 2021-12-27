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
void printVec(vector<T> path){
    for (T i: path)
    std::cout << i << ' ';
    cout<<"\n";
}

void solve() {
    string catchp;
    getline(cin,catchp);
    int num = split(catchp, " ").size();
    vector<string> team1;
    vector<string> team2;
    vector<string> all;
    int pax;
    cin>>pax;
    ITER(pax){
        cin>>catchp;
        all.push_back(catchp);
    }
    int startPos = 0;
    bool first = true;
    while(!all.empty()){
        startPos +=num-1;
        startPos%=all.size();
        if(first)team1.push_back(all[startPos]);
        else team2.push_back(all[startPos]);
        all.erase(all.begin()+startPos); 
        first=!first;  

    }
    cout<<team1.size()<<"\n";
    for(string s:team1){
        cout<<s<<"\n";
    }
    cout<<team2.size()<<"\n";
    for(string s:team2){
        cout<<s<<"\n";
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