#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define vii vector<vector<int>>
#define pi pair<int,int>
#define mp make_pair 
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
const int N=1e5+10;
vi dp(N,-1);

int solve(int n,vi &v){
	int cost =INT_MAX;
	if(dp[n]!=-1) return dp[n];
	if(n==0) return 0;
	cost = min(cost,solve(n-1,v)+abs(v[n]-v[n-1]));
	if(n>1)
		cost = min(cost,solve(n-2,v)+abs(v[n]-v[n-2]));
	return dp[n]=cost;
}

int32_t main(){
    FIO;
    int n;cin>>n; 
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<solve(n-1,v)<<endl;
    return 0;
}