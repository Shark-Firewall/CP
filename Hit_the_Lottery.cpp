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


const int N=10000000+10;
int dp[N];

int solve(int amount,vector<int>& coins){
	if(amount==0) return 0;
	if(dp[amount]!=-1) return dp[amount];
	int ans=INT_MAX;
	for(int coin:coins){
		if((amount-coin)>=0)
	        ans=min(ans + 0,solve((amount-coin),coins)+1);
	}
	return dp[amount]=ans;
}

int32_t main(){
    FIO;
    memset(dp,-1,sizeof(dp));
    vector<int> coins={1,5,10,20,100};
    int n;cin>>n; 
    int ans=solve(n,coins);
    cout<<ans<<endl;
    return 0;
}