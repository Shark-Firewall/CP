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

int32_t main(){
    FIO;
    vi a(3);
    vi b(3);
    for(int i=0;i<3;i++) cin>>a[i];
    for(int i=0;i<3;i++) cin>>b[i];
    int alice=0;
    int bob=0;
    for(int i=0;i<3;i++){
       if(a[i]==b[i]) continue;
       else if(a[i]>b[i]) alice++;
       else bob++;
    }
    cout<<alice<<" "<<bob<<endl;
    return 0;
}