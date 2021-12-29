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

// (X[i], Y[i]) are coordinates of i'th point.
double polygonArea(vector<double> X, vector<double> Y)
{
    // Initialize area
    double area = 0.0;
    int n = X.size();
  
    // Calculate value of shoelace formula
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;  // j is previous vertex to i
    }
  
    // Return absolute value
    return abs(area / 2.0);
}

// (X[i], Y[i]) are coordinates of i'th point.
double polygonArea(vector<double> X, vector<double> Y, int ignore)
{
    // Initialize area
    double area = 0.0;
    int n = X.size();
  
    // Calculate value of shoelace formula
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if(i==ignore)continue;
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;  // j is previous vertex to i
    }
  
    // Return absolute value
    return abs(area / 2.0);
}

void solve() {
    int n;
    vector<double> x;
    vector<double> y;
    double inp;
    ITER(3){
        cin>>inp;x.push_back(inp);
        cin>>inp;y.push_back(inp);
    }
    double triArea = polygonArea(x,y);
    cout<<triArea<<"\n";
    cin>>n;
    int ans=0;
    ITER(n){
        cin>>inp;x.push_back(inp);
        cin>>inp;y.push_back(inp);
        double newArea = 0;
        ITER(3){
            newArea+=polygonArea(x,y,i);
        }
        if(newArea==triArea)ans++;
        x.pop_back();y.pop_back();
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    cout<<setprecision(1)<<fixed;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}