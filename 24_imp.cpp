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
    	string s;
    	cin>>s;
    	int digit=s[0]-'0'-1;
    	int ans=digit*10+((s.size())*(s.size()+1))/2;
        cout<<ans<<endl;
    }
    return 0;
}