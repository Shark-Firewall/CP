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
    string s;
    cin>>s;
    vector<char>v={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
    bool flag=false;
    for(int i=0;i<5;i++){
    	string tmp;cin>>tmp;
    	if(s[0]==tmp[0] or s[1]==tmp[1]){
	    	flag=true;
	    	break;
    	}
    }
    cout<<(flag?"YES":"NO")<<endl;
    return 0;
}