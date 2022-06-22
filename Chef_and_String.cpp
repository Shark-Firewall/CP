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
    	string s;
    	cin>>s;
    	int n=s.size();
    	bool flag=true;
    	for(int i=0;i<n;i++){
    		if(s[i]!=s[(i+2)%n]){
    			flag=false;
    			break;
    		}
    	}
    	cout<<((flag)?"YES\n":"NO\n");
    }
    return 0;
}