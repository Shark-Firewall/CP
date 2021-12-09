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

void printzig(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	printzig(n-1);
	cout<<n<<" ";
	printzig(n-1);
	cout<<n<<" ";
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    printzig(n);
    return 0;
}