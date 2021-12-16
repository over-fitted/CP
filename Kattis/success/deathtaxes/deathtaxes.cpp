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
    string trans;
    ll numShares,x;
    numShares=0;
    double avgprice;
    while(cin>>trans){
        cin>>x;
        if(trans == "buy"){
            int newPrice;
            cin>>newPrice;
            double total = avgprice*numShares+x*newPrice;
            numShares+=x;
            avgprice=total/numShares;
        }
        elif(trans=="sell"){
            numShares-=x;
            cin>>x;
        }
        elif(trans=="split"){
            avgprice/=x;
            numShares*=x;
        }
        elif(trans=="merge"){
            avgprice*=x;
            numShares/=x;
        }
        elif(trans=="die"){
            double profitPerShare=x-avgprice;
            
            cout << fixed;
            cout.precision(3);
            if(profitPerShare<=0){
                cout<<x*numShares;
            }
            else{
                cout<<numShares*(x-(profitPerShare)*0.3);
            }
        }
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