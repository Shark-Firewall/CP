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
    	map<int,int>mp;
    	for(int i=0;i<n;i++){
    		int temp;cin>>temp;
    		mp[temp]++;
    	}
    	int ans=0;
    	for(auto i:mp){
    		if(i.first>=1 && i.first<=n){
    			if(i.second>1)
	                ans+=(i.second-1);

    		}
    		else ans+=i.second;
    	}
    	cout<<ans<<endl;
    }   
    return 0;
}