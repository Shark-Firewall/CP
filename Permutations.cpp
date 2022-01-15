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
    vi v;
    if(n==1) cout<<1<<endl;
    else if(n>1 and n<=3) cout<<"NO SOLUTION"<<endl;
    else{
    	int j=2;
        while(j<=n){
        	v.pb(j);
        	j+=2;
        }
        int i=1;
        while(i<=n){
        	v.pb(i);
        	i+=2;
        }
        for(int i=0;i<n;i++){
        	cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}