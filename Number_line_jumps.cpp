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
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v1>v2){
    	int rem=(x1-x2)%(v1-v2);
    	if(rem==0) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}