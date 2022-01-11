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

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}


void solve() {
    int n,k;
    string s;
    cin>>n;cin>>k;
    stack<int> st;
    int currPos=0;
    st.push(currPos);
    ITER(k){
      cin>>s;
      if(s[0]=='-'){
        currPos-=stoi(s.substr(1));
        while(currPos<0)currPos+=n;
        st.push(currPos);
      }
      elif(isalpha(s[0])) {
        cin>>s;
        ITER(stoi(s)){
          st.pop();
        }
        currPos=st.top();
      }
      else {
        currPos+=stoi(s);
        currPos%=n;
        st.push(currPos);
      }
      // cout<<"curr pos: "<<currPos<<"\n";
    }
    cout<<currPos;
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