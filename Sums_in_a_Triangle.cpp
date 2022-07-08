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

int32_t main(){
    FIO;
	test(){
		int n;
		cin>>n;
		vii v(n+1);
		for(int i=1;i<=n;i++){
			v[i].resize(n+1);
			for(int j=1;j<=i;j++){
				cin>>v[i][j];
			}
		}
	    int dp[n+1][n+1];
	    for(int i=1;i<=n;i++){
	    	dp[n][i]=v[n][i];
	    }
	    for(int i=n-1;i>0;i--){
	        for(int j=1;j<=i;j++){
	        	dp[i][j]=v[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
	        }
	    }

	    cout<<dp[1][1]<<endl;
	}
    return 0;
}