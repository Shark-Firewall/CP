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
    int res=0;
    int power=1;
    while(n>0){
    	int rem=n%b;
    	n/=b;
    	res=res+power*rem;
    	power*=10;
    }
    cout<<res<<endl;
    return 0;
}