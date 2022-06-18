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

int32_t main(){
    FIO;
    int n;
    cin>>n;
    vi v(n);
    int max_count=0;
    int min_count=0;
    int mx=v[0];
    int mn=v[0];
    for(int i=1;i<n;i++){
    	if(v[i]>mx){
    		max_count++;
    		mx=v[i];
    	}
    	else if(v[i]<mn){
    		min_count++;
    		mn=v[i];
    	}
    }
    cout<<max_count<<" "<<min_count;
    return 0;
}