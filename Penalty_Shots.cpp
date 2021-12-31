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
    	int team1=0;
    	int team2=0;
    	for(int i=1;i<=10;i++){
    		int a;
    		cin>>a;
    		if(i%2==0 and a==1){
	            team2++;
    		}
    		else if(i%2!=0 and a==1){
    			team1++;
    		}
    	}
    	if(team1==team2) cout<<0<<endl;
    	else if(team1>team2) cout<<1<<endl;
    	else cout<<2<<endl;
    }
    return 0;
}