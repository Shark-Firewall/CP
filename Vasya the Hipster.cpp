#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define pb push_back
#define vi vector<int>
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<max((a-min(a,b))/2,(b-min(a,b))/2)<<endl;
    return 0;
}