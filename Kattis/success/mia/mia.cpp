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
#define elif else if

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int toRes(int a, int b) {
    if((a==2 and b==1)or(a==1 and b==2))return MAX_N;
    if(a>b)return a*10+b;
    return b*10+a;
}

void solve() {
    while(true){
        int s0,s1,r0,r1,p1,p2;
        string win;
        scanf("%d %d %d %d",&s0,&s1,&r0,&r1);
        // cin>>s0;cin>>s1;cin>>r0;cin>>r1;
        if (s0==s1 and r0==r1 and s0==r0 and s0==0){
            return;
        }
        if((s0==2 and s1 == 1)or(s1==2 and s0 == 1)or(r0==2 and r1 == 1)or(r1==2 and r0 == 1)){
            p1=toRes(s0,s1);
            p2=toRes(r0,r1);
            if(p1==p2){cout<<"Tie.\n";continue;}
            if(p1>p2){cout<<"Player "<<1<<" wins.\n";}
            else cout<<"Player "<<2<<" wins.\n";
        }
        elif(s0==s1){
            if(r0==r1){
                if(r0>s0)cout<<"Player "<<2<<" wins.\n";
                elif(r0==s0){cout<<"Tie.\n";}
                else cout<<"Player "<<1<<" wins.\n";
            }
            else cout<<"Player "<<1<<" wins.\n";
        }
        elif(r0==r1){
            if(s0==s1){
                if(r0>s0)cout<<"Player "<<2<<" wins.\n";
                elif(r0==s0){cout<<"Tie.\n";continue;}
                else cout<<"Player "<<1<<" wins.\n";
            }
            else cout<<"Player "<<2<<" wins.\n";
        }
        else {
            p1=toRes(s0,s1);
            p2=toRes(r0,r1);
            if(p1==p2){cout<<"Tie.\n";continue;}
            if(p1>p2){cout<<"Player "<<1<<" wins.\n";}
            else cout<<"Player "<<2<<" wins.\n";
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