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
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a>b and a>c) cout<<"Alice"<<endl;
		else if(b>a and b>c) cout<<"Bob"<<endl;
		else cout<<"Charlie"<<endl;
	}
	return 0;
}