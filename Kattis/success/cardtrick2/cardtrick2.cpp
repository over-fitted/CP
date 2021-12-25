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

void printArr(int *arr, unsigned int n) {
   int i;
   cout<<"{";
   for (i = 0; i < n; i++) cout <<arr[i]<<",";
   cout<<"}";

}
// vector<vector<int>> v{{2},{3,2},{4,2,3},{3,2,5,4},{4,2,5,6,3},{5,2,7,4,3,6}{6,2,4,5,3,7,8},{4,2,8,6,3,7,9,5},{8,2,9,7,3,10,5,6,4},{10,2,9,6,3,5,8,7,4,11},{6,2,7,5,3,11,12,8,4,9,10},{8,2,5,10,3,12,11,9,4,7,6,13,},{4,1,13,11,2,10,6,7,3,5,12,9,8,}};

void solve() {
    vector<vector<int>> v{{2},{3,2},{4,2,3},{3,2,5,4},{4,2,5,6,3},{5,2,7,4,3,6},{6,2,4,5,3,7,8},{4,2,8,6,3,7,9,5},{8,2,9,7,3,10,5,6,4},{10,2,9,6,3,5,8,7,4,11},{6,2,7,5,3,11,12,8,4,9,10},{8,2,5,10,3,12,11,9,4,7,6,13,},{5,2,14,12,3,11,7,8,4,6,13,10,9,}};
    int n,x;
    cin>>n;
    ITER(n){
        cin>>x;
        for(int a:v[x-1]){
            cout<<a-1<<" ";
        }
        cout<<"\n";
    }
}

// used to precalc all
// void solve() {
//     queue<int> q({1});
//     int ans[14]={};
//     REP(j,1,2){
//         ITER(j){
//             int a=q.front();
//             q.pop();
//             q.push(a);
//         }
//         cout<<q.front()<<"\n";
//         ans[q.front()]=j+1;
//         q.pop();
//     }
//     printArr(ans,14);
// }

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