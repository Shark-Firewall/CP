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
        
        map<int,int>m;
        for(int i=0;i<n;i++) m[v[i]]++;
        int ans=n-1;
        for(auto i:m){
            ans=min(ans,n-i.second);
        }

        cout<<ans<<endl;
    }
    return 0;
}