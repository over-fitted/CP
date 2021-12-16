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
    int courses,categories,x;
    cin>>courses;
    while(courses!=0){
        cin>>categories;
        bool succ=true;
        set<int> c;
        cin.ignore();
        ITER(courses){
            cin>>x;
            c.insert(x);
        }
        ITER(categories){
            int possible,mini,y;
            cin>>possible>>mini;
            ITER(possible){
                cin>>y;
                if(c.count(y)>0){
                    mini-=1;
                }
            }
            if(mini>0)succ=false;
        }
        cout<<(succ?"yes":"no")<<"\n";
        cin>>courses;
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