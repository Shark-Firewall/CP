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
    	set<string>st;
    	for(int i=1;i<s.size();i++){
    		string sub="";
    		sub+=s[i];
    		sub+=s[i-1];
    		st.insert(sub);
    	}
    	cout<<st.size()<<endl;
    }
    return 0;
}