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
char letter[27];

// void precompute(){
// 	for(int i=1;i<27;i++){
// 		letter[i]=char(i+96);
// 	}
// }

int32_t main(){
    FIO;
    // precompute();
    test(){
    	string s;
    	cin>>s;
    	sort(s.begin(),s.end());
    	s="$"+s;
    	int ans=0;
    	for(int i=1;i<s.size();i++){
            ans+=(i*(int32_t(s[i])-96));
    	}
    	cout<<ans<<endl;
    }
    return 0;
}