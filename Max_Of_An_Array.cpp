#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int max_array(vi &v,int i,int n){
	if(i==n-1) return v[i];
	int m=max_array(v,i+1,n);
	if(m>v[i]) return m;
	else return v[i];
}

int32_t main(){
    FIO;
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<max_array(v,0,n)<<endl;
    return 0;
}