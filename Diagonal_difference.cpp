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
    int l=0;
    int r=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		int input;cin>>input;
    		if(i==j) l+=input;
    		if(i+j==(n-1)) r+=input;

    	}
    }
    // int total=r-l;
    cout<<abs(l-r)<<endl;
    return 0;
}