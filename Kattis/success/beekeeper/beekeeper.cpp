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

bool isVowel(char c){
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='y'){
        return true;
    }
    return false;
}

void solve() {
    int t;
    while(cin>>t and t!=0){
        int maxi = -1;
        string ans,curr;
        char prev;
        ITER(t){
            int doubles;
            doubles = 0;
            cin>>curr;
            for(int i =1;i<curr.length();i++){
                if(curr[i]==curr[i-1] and isVowel(curr[i])){
                    doubles++;
                }
            }
            if(doubles>maxi){
                ans=curr;
                maxi=doubles;
            }
        }
        cout<<ans<<"\n";
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