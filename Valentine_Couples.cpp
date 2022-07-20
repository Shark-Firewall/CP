#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<long long>
#define vii vector<vector<long long>>
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
	test(){
		ll n;
		cin>>n;
		vi a(n);
		vi b(n);
		for(ll i=0;i<n;i++) cin>>a[i];
		for(ll j=0;j<n;j++) cin>>b[j];

		sort(all(a));
	    sort(all(b),greater<ll>());

	    for(ll i=0;i<n;i++){
	    	a[i]+=b[i];
	    }
	    ll mx=INT_MIN;
	    for(ll i=0;i<n;i++){
	    	mx=max(mx,a[i]);
	    }
		cout<<mx<<endl;
	}
	return 0;
}