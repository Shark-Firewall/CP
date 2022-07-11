#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<int>
#define vii vector<vector<int>>
#define pi pair<int,int>
#define mp make_pair
#define pb  push_back
#define mod 1e9+7
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//#ifndef ONLINE_JUDGE
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif

}


int main() {
	file_i_o();
	ll n;
	cin >> n;
	ll a, b, c;
	cin >> a >> b >> c;
	vector<vector<ll>>dp(3, vector<ll>(n, 0));
	dp[0][0] = a;
	dp[1][0] = b; 
	dp[2][0] = c;
	for (int i = 1; i <=n-1; i++) {
		cin>>a>>b>>c;
		dp[0][i] = a + max(dp[1][i - 1], dp[2][i - 1]);
		dp[1][i] = b + max(dp[0][i - 1], dp[2][i - 1]);
		dp[2][i] = c + max(dp[0][i - 1], dp[1][i - 1]);
	}
	cout<<max({dp[0][n-1],dp[1][n-1],dp[2][n-1]})<<endl;;
	return 0;
}