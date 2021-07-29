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
    test(){
        int x,y;
        cin>>x>>y;
        if(__gcd(x,y)>1) cout<<0<<endl;
        else if((__gcd(x+1,y)>1) || (__gcd(x,y+1)>1)) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}