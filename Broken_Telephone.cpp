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
    test(){
        int n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        set<int>ans;
        int count=0;
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]){
                ans.insert(i);
                ans.insert(i-1);
            }
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}