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

int dec(int n,int b){
	int res=0;
	int p=1;
	while(n>0){
		int rem=n%10;
		n/=10;
		if(rem!=0){
			res=res+rem*p;
		}
		p*=b;
	}
	return res;
}

int32_t main(){
    FIO;
    int n,b;
    cin>>n;
    cin>>b;
    cout<<dec(n,b)<<endl;
    return 0;
}