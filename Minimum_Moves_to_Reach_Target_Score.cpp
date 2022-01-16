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

int minMoves(int target, int maxDoubles) {
	int count=0;
    while(maxDoubles and target>1){
    	if(target%2==0){
    		target/=2;
    		--maxDoubles;
    		count++;
    	}
    	else{
    		--target;
	    	count++;
    	}
    }
    count+=target;
    return (count-1);
}

int32_t main(){
    FIO;
    int target;
    int m;
    cin>>target>>m;
    cout<<minMoves(target,m)<<endl;
    return 0;
}