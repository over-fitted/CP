// TLE?????

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
    int w,l;
    int num,actX,actY,X,Y,dist;
    char dir;
    scanf("%d %d",&w,&l);
    while(w!=0){
        actX=actY=Y=X=0;
        w-=1;l-=1;
        cin>>num;
        ITER(num){
            cin>>dir;
            cin>>dist;
            if(dir == 'u'){
                actY = min(actY+dist,l);
                Y = Y + dist;
            }
            elif(dir=='d'){
                actY = max(actY-dist,0);
                Y = Y - dist;
            }
            elif(dir == 'r'){
                actX = min(actX+dist,w);
                X = X + dist;
            }
            else{
                actX = max(actX-dist,0);
                X = X - dist;
            }
        }
        cout<<"Robot thinks "<<X<<" "<<Y<<"\n";
        cout<<"Actually at "<<actX<<" "<<actY<<"\n\n";
        scanf("%d %d",&w,&l);
    }
    // while (cin >> x) {
    // }
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