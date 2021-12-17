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
    ll p,d;
    ll v, wa, wb;
    v=wa=wb=0;
    cin>>p>>d;
    ll A[d]={};
    ll B[d]={};
    ITER(p){
        int x,a,b;
        cin>>x>>a>>b;
        A[x-1]+=a;
        B[x-1]+=b;
    }
    ITER(d){
        ll total = A[i]+B[i];
        v+=total;
        if(A[i]>B[i]){
            wa+=A[i]-(total/2)-1;
            wb+=B[i];
            cout<<"A "<<A[i]-(total/2)-1<<" "<<B[i]<<"\n";
        } else{
            wa+=A[i];
            wb+=B[i]-(total/2)-1;
            cout<<"B "<<A[i]<<" "<<B[i]-(total/2)-1<<"\n";
        }
    }
    cout<<setprecision(10);
    cout<<(double)abs(wa-wb)/v;
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