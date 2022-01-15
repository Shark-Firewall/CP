#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define loopin(start,dest,vect) for(int i=start;i<dest;i++) cin>>vect[i]
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    int n;
    cin>>n;
    vi v(n);
    loopin(0,n,v);
    int prev=INT_MIN;
    int count=0;
    for(int i=0;i<v.size();i++){
    	while(prev>v[i]){
    		v[i]++;
    		count++;
    	}
    	prev=v[i];
    }
    cout<<count<<endl;
    return 0;
}
