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
		ll n,k;
		cin>>n>>k;
		set<ll>st;
		for(ll i=0;i<n;++i){
			ll temp;cin>>temp;
			st.insert(temp);
		}
		int mex=0;
		while(true){
			if(st.count(mex)){
			    mex++;
			}
			else{
				if(k>0){
					k--;
					mex++;
				}
				else{
					break;
				}
			}
		}
		cout<<mex<<endl;
	}
	return 0;
}