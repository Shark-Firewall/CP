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
    // vi v(n+1);
    int maxi=INT_MIN;
    int mini_index=0;
    int maxi_index=0;
    int mini=INT_MAX;
    for(int i=1;i<=n;i++){
    	int a;
    	cin>>a;
        if(a<=mini){
           mini=a;
           mini_index=i;
        }
        if(a>maxi){
           maxi=a;
           maxi_index=i;
        }
    }
    if(maxi_index>mini_index){
    	cout<<((maxi_index-1)+(n-mini_index)-1)<<endl;
    }
    else{
    	cout<<((maxi_index-1)+(n-mini_index))<<endl;
    }
    return 0;
}