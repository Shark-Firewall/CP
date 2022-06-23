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
    	string a,b;
    	cin>>a;
    	cin>>b;
    	bool flag=false;
    	for(int i=0;i<a.size();i++){
    		for(int j=0;j<b.size();j++){
    			if(a[i]==b[j]){ flag=true;break;}
    		}
    	}
    	cout<<((flag)?"Yes":"No")<<endl;
    }
    return 0;
}