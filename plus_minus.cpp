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
    double positive=0;
    double negative=0;
    double zero=0;
    for(int i=0;i<n;i++){
    	int input; cin>>input;
    	if(input==0) zero++;
    	else if(input>0) positive++;
    	else negative++;
    }
    double pos_ratio=positive/(float)n;
    double neg_ratio=negative/(float)n;
    double z_ratio=zero/(float)n;
    cout<<ps(pos_ratio,6)<<endl;    
    cout<<ps(neg_ratio,6)<<endl;    
    cout<<ps(z_ratio,6)<<endl;    
    return 0;
}