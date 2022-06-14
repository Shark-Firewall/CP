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

int binpow(int a, int b) {

	// Recursive approch

    // if (b == 0)
    //     return 1;
    // if(b&1) return a*binpow(a,b/2)*binpow(a,b/2);
    // else return binpow(a,b/2)*binpow(a,b/2);

    // Iterative Approch

    int res=1;
    while(b>0){
    	if(b&1) res=(res*a);
    	res
    }

}

int32_t main(){
    FIO;
    int a,n;
    cin>>a>>n;
    cout<<binpow(a,n)<<endl;
    return 0;
}