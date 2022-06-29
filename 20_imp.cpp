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
    test(){
    	int a,b,n;
    	cin>>a>>b>>n;
    	int count=0;
    	while(n>=a && n>=b){
    		if(a>b){
    			b+=a;
    		}
    		else{
    			a+=b;
    		}
    		count++;
    	}
    	cout<<count<<endl;
    }
    return 0;
}