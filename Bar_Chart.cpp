#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define loopin(start,dest) for(int i=start;i<dest;i++) cin>>v[i]
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void barchart(vi v){
	int largest=INT_MIN;
	for(int i=0;i<v.size();i++){
		if(v[i]>=largest) largest=v[i];
	}
	for(int i=largest;i>0;i--){
		for(int j=0;j<v.size();j++){
			if(v[j]==i) {
			    cout<<"*\t";
			    v[j]--;
		    }
			else cout<<"\t";
		}
		cout<<endl;

	}
}

int32_t main(){
    FIO;
    int n;cin>>n;
    vi v(n);
    loopin(0,n);
    barchart(v);
    return 0;
}