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

void digit(int n){
	if(n==0) return;
	int res=n%10;
	digit(n/10);
	cout<<res<<endl;
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    digit(n);
}