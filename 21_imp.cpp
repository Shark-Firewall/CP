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
    int prev=INT_MIN;
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
    	int tmp;cin>>tmp;
        if(tmp>prev){
        	count++;
        }
        else{
        	count=1;
        }
        ans=max(ans,count);
        prev=tmp;
    }
    cout<<ans<<endl;
    return 0;
}