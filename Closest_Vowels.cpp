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


int powerof2(int x,int n){
	int result=1;
	while(n){
		if(n&1) result=result*x%mod;
	    n/=2;
	    x=x*x%mod;
	}
	return result;
}

int32_t main(){
    FIO;
    test(){
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int count=0;
    	vector<int32_t>vowels={'a','e','i','o','u'};
    	for(char i:s){
    		int32_t min_dis=26;
    		for(auto v:vowels){
    			min_dis=min(min_dis,abs(int32_t(i)-v));
    		}
    		int temp_count=0;
    		for(auto v:vowels){
    			int dis=abs(int32_t(i)-v);
    			if(dis==min_dis) temp_count++;
    		}
            count+=(temp_count==2);
    	}
    	cout<<powerof2(2,count)<<endl;
    }
    return 0;
}