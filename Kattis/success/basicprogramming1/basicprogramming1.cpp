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

int moda(ll x){
    return x%26;
}

void solve() {
    ll N,x;
    int t;
    cin>>N>>t;
    vector<ll> A;
    ITER(N){
        cin>>x;
        A.push_back(x);
    }
    if(t==1){
        cout<<7;
        return;
    }
    if(t==2){
        if(A[0]>A[1])cout<<"Bigger"<<"\n";
        elif(A[0]==A[1])cout<<"Equal"<<"\n";
        else cout<<"Smaller"<<"\n";
        return;
    }
    if(t==3){
        sort(A.begin(),A.begin()+3);
        cout<<A[1];
        return;
    }
    if(t==4){
        ll tot=0;
        for(ll a:A){
            tot+=a;
        }
        cout<<tot;
        return;
    }
    if(t==5){
        ll sum=0;
        for(ll i =0;i<N;i++){
            if(A[i]%2==0){
                sum+=A[i];
            }
        }
        cout<<sum;
    }
    if(t==6){
        // transform(A.begin(),A.end(),A,moda);
        for(ll i:A){
            cout<<(char)(i%26+97);
        }
        return;
    }
    if(t==7){
        int seen[N]={0};
        ll x=0;
        while(x!=N-1){
            if(x>N-1 or x<0){
                cout<<"Out";
                return;
            }
            if(seen[x]==1){
                cout<<"Cyclic";return;
            }
            seen[x]=1;
            x=A[x];
        }
        cout<<"Done";
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