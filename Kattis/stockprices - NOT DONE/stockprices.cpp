//note: works with one test case but not with multiple for some reason

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
#define ITER(x) for (int hjasklASDF = 0; hjasklASDF < x; hjasklASDF++)
#define elif else if

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


template<typename T>
void print_queue(T q) { // NB: pass by value so the print uses a copy
    while(!q.empty()) {
        std::cout << q.top() << ' ';
        q.pop();
    }
    std::cout << '\n';
}

void solve() {
    int trans,num,price;
    string type,buffer;
    string sask, sbid, sstock;
    int ask, bid, stock;
    ask = bid=stock=-MAX_N;
    cin>>trans;
    // , std::greater<int>
    priority_queue<int, std::vector<int>> buys;
    priority_queue<int, std::vector<int>, std::greater<int>> sells;
    ITER(trans){
        cin>>type;
        cin >> num;
        cin>>buffer;cin>>buffer;cin>>price;
        // cout<<"buyq: ";
        // print_queue(buys);
        // cout<<"\nsellq: ";
        // print_queue(sells);
        // cout<<"\n";
        if(type=="buy"){
            while(!sells.empty() and sells.top()<=price and num > 0){
                sells.pop();
                num--;
                stock = price;
            }
            ITER(num){
                buys.push(price);
            }
            if(sells.empty()) {
                sask = "-";
            } else {
                sask = to_string(sells.top());
            }
            if(buys.empty()) {
                sbid = "-";
            } else {
                sbid = to_string(buys.top());
            }
            if(stock == -MAX_N) {
                sstock = "-";
            } else {
                sstock = to_string(stock);
            }
            cout<<sask<<" "<<sbid<<" "<<sstock<<"\n";
        } 
        else {
            while(buys.top()>=price and num > 0){
                buys.pop();
                num--;
                stock = price;
            }
            ITER(num){
                sells.push(price);
            }
            if(sells.empty()) {
                sask = "-";
            } else {
                sask = to_string(sells.top());
            }
            if(buys.empty()) {
                sbid = "-";
            } else {
                sbid = to_string(buys.top());
            }
            if(stock == -MAX_N) {
                sstock = "-";
            } else {
                sstock = to_string(stock);
            }
            cout<<sask<<" "<<sbid<<" "<<sstock<<"\n";
        }
    }
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