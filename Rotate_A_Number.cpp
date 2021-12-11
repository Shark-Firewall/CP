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
    int n,b;
    cin>>n;
    cin>>b;
    int k=(log10(n)+1);
    b=b%k;
    if(b<0){
    	b=b+k;
    }
    int div=1;
    int mul=1;
    for(int i=1;i<=k;i++){
    	if(i<=b){
           div*=10;
    	}
    	else{
    		mul*=10;
    	}
    }

    int add=n/div;
    int rem=n%div;

    int res=rem*mul+add;
    cout<<res<<endl;
    return 0;
}