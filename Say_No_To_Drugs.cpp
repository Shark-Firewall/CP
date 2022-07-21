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
	test(){
		ll n,k,l;
		cin>>n>>k>>l;
		vi v(n);
		ll mx=INT_MIN;
		for(ll i=0;i<n-1;++i){
			cin>>v[i];
			mx=max(mx,v[i]);
		}
		ll friend_speed;
		cin>>friend_speed;
		if(k<0){
			if(friend_speed>mx) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else{
			if((friend_speed+(l-1)*k)>mx)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}

	}
	return 0;
}