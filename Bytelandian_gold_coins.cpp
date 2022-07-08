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

unordered_map<int,int>dp;

int solve(int n){
	if(n<=2) return dp[n]=n;
	if(dp.count(n)) return dp[n];
    return dp[n]=max(n,solve(n/2)+solve(n/3)+solve(n/4));
}

int32_t main(){
    FIO;
    int n;
    while(cin>>n){
    	cout<<solve(n)<<endl;
    }
    return 0;
}