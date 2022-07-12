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
#define test() int t;cin>>t;while(t--)
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
	test(){
		ll a,b;
		cin>>a>>b;
		if(a>b)swap(a,b);
		if(2*a<b)cout<<"NO"<<endl;
		else{
			a%=3;b%=3;
			if(a>b) swap(a,b);
			if((a==0 and b==0) or (a==1 and b==2)){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}