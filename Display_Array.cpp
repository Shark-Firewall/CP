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

void print_Array(vi &v,int n,int i){
    if(i==n){
    	return;
    }
    cout<<v[i]<<endl;
    print_Array(v,n,++i);
}

int32_t main(){
    FIO;
    int n;cin>>n;
    vi v(n);
    loopin(0,n,v);
    print_Array(v,n,0);
    return 0;
}