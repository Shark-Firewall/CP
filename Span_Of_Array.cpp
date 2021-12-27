#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define loopin(start,dest) for(int i=start;i<dest;i++) cin>>v[i]
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int spanarray(vi v){
	int smallest=INT_MAX;
	int largest=INT_MIN;
	for(int i=0;i<v.size();i++){
		if(v[i]>=largest) largest=v[i];
		else if(v[i]<=smallest) smallest=v[i];
	}
	return largest-smallest;
}

int32_t main(){
    FIO;
    int n;cin>>n;
    vi v(n);
    loopin(0,n);
    cout<<spanarray(v)<<endl;
    return 0;
}