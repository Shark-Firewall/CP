#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main() {
    FIO;
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_soft = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;
    int m0 = min(total_soft, lime);
    int m = min(m0, salt);
    cout << (m / n) << endl;
    return 0;
}

// n-firends
// k-bottles
// l-milliliter of drink in bootle
// c-no of lime
// d -no of slice of lime
// p-gram od salt