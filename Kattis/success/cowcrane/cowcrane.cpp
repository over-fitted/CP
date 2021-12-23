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
    ll m,l,M,L,tm,tl,dl,dm;
    cin>>m>>l;
    cin>>M>>L;
    cin>>tm>>tl;

    // l first, mlLlM
    dl=abs(m)+abs(l-m)+abs(L-l);
    dm=dl+abs(l-L)+abs(M-l);
    if(dl<=tl and dm<=tm){
        cout<<"possible\n";
        return;
    }

    // m first, lmMmL
    dm=abs(l)+abs(m-l)+abs(M-m);
    dl=dm+abs(m-M)+abs(L-m);
    if(dl<=tl and dm<=tm){
        cout<<"possible\n";
        return;
    }

    // mMlL
    dm = abs(m)+abs(M-m);
    dl=dm+abs(l-M)+abs(L-l);
    if(dl<=tl and dm<=tm){
        cout<<"possible\n";
        return;
    }

    //lLmM
    dl = abs(l)+abs(L-l);
    dm=dl+abs(m-L)+abs(M-m);
    if(dl<=tl and dm<=tm){
        cout<<"possible\n";
        return;
    }
    cout<<"impossible\n";
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