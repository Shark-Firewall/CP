#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define loopin(start,dest,vect) for(int i=start;i<dest;i++) cin>>vect[i]
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    test(){
    	string s;
    	cin>>s;
    	int length=s.size();
    	bool flag=true;
    	if(length%2!=0) flag=false ;
    	else{
    		for(int i=0;i<(length/2);i++){
    			if(s[i]!=s[i+(length/2)]){
    				flag=false;
    			}
    		}
    	}
    	cout<<((flag)?"YES":"NO")<<endl;
    }
    return 0;
}