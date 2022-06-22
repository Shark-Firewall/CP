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
int fact[7];

void precompute(){
    fact[0]=1;
    for(int i=1;i<7;i++) fact[i]=(fact[i-1]*i);
}

int ncr(int n,int r){
    if(r>n) return 0;
    return (fact[n]/(fact[n-r]*fact[r]));
}

int32_t main(){
    FIO;
    precompute();
    int x,t;
    cin>>x>>t;
    int ans=0;
    while(t--){
    	string s;
    	cin>>s;
    	s="$"+s;
    	for(int i=1,j=54;i<j;i+=4,j-=2){
    		int temp=0;
    		for(int k=i;k<i+4;k++) temp+=(s[k]=='0');
    		for(int k=j;k>j-2;k--) temp+=(s[k]=='0');
    		ans+=ncr(temp,x);
    	}
    }
    cout<<ans<<endl;
    return 0;
}