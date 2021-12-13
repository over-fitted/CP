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


int getYear(string date) {
    return stoi(date.substr(0,4));
}

void solve() {
    string name, begin, birth;
    int courses;
    cin >>name;cin>>begin;cin>>birth;cin>>courses;
    cout<<name<<" ";
    if(getYear(begin)>=2010)cout<<"eligible"<<"\n";
    elif(getYear(birth)>=1991)cout<<"eligible"<<"\n";
    elif(courses>40)cout<<"ineligible"<<"\n";
    else cout<<"coach petitions\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
}