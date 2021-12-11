#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define pb push_back
#define vi vector<int>
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    int n;
    cin>>n;
    int digit=(log10(n)+1);
    int res=0;
    for(int i=1;i<=digit;i++){
    	int rem=n%10;
    	n/=10;
    	int p=1;
		for(int j=1;j<rem;j++){
	        p*=10;
		}
		res=res+i*p;
    }
    cout<<res<<endl;
    return 0;
}