#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<ll>
#define vii vector<vector<ll>>
#define pi pair<int,int>
#define mp make_pair
#define pb  push_back
#define all(x) x.begin(),x.end()
#define mod 1e9+7
#define test() ll t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif 
}


int main() {
	file_i_o();
	ll n,q;
	cin>>n>>q;
	vi row(n+1,0),col(n+1,0);
	for(ll i=0;i<q;++i){
		string s; int a,b;
		cin>>s>>a>>b;
		if(s=="RowAdd"){
			row[a]+=b;
		}
		else col[a]+=b;
	}
	ll mx1=INT_MIN;ll mx2=INT_MIN;
	for(ll i=1;i<=n;i++){
		mx1=max(mx1,row[i]);
		mx2=max(mx2,col[i]);
	}
	cout<<(mx1+mx2)<<endl;
	return 0;
}