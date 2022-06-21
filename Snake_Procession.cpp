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

void solve(){
	int n;cin>>n;
	string s;
	getline(cin,s);
	string ans="";
	for(auto i:s){
		if(i!='.') ans+=i;
	}
	if(ans[0]=='T') cout<<"Invalid"<<endl;
	else{
		bool flag=false;
		for(int i=0;i<ans.size()-1;i++){
			if(ans[i]=)
	    }
	}
	
}

int32_t main(){
    FIO;
    test(){
    	solve();
    }
    return 0;
}