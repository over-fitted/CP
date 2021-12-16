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



void solve() {
    string have,target;
    int ones,zeros,questions,steps,targetones;
    ones=zeros=questions=steps=targetones=0;
    cin>>have;cin>>target;
    ITER(have.length()){
        if(have[i]!=target[i]){
            if(target[i]=='1'){
                targetones++;
            }
            if(have[i]=='1'){
                ones++;
            }
            elif(have[i]=='?'){
                questions++;
            }
            else zeros++;
        }
    }
    if(ones>targetones){
        cout<<"-1\n";
        return;
    }
    cout<<questions+ones+max(0,zeros-ones)<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}