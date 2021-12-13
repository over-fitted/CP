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
    int t;
    int ad,br,go;
    ad=br=go=0;
    char a;
    cin>>t;
    ITER(t){
        cin>>a;
        //ad
        if(i%3==0){
            if(a=='A')ad++;
        }
        if(i%3==1){
            if(a=='B')ad++;
        }
        if(i%3 ==2){
            if(a=='C')ad++;
        }
        //br
        if(i%2==0){
            if(a=='B')br++;
        }
        if(i%4==1){
            if(a=='A')br++;
        }
        if(i%4==3){
            if(a=='C')br++;
        }
        if(i%6<=1){
            if(a=='C')go++;
        }
        elif(i%6<=3){
            if(a=='A')go++;
        }
        else{
            if(a=='B')go++;
        }
    }
    int maxi=max(ad,br);
    maxi = max(maxi,go);
    cout<<maxi<<"\n";
    if(ad==maxi)cout<<"Adrian\n";
    if(br==maxi)cout<<"Bruno\n";
    if(go==maxi)cout<<"Goran\n";
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