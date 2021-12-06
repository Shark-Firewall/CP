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

void printprime(int n){
	while(n%2==0){
		cout<<2<<" ";
		n/=2;
	}

	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
	}

	if(n>2) cout<<n<<endl;
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    printprime(n);
    return 0;
}