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

int decToany(int n,int b){
    int res=0;
    int power=1;
    while(n>0){
        int rem=n%b;
        n/=b;
        res=res+power*rem;
        power*=10;
    }
    return res;
}

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
    int num;
    cin>>num;
    int a;cin>>a;
    int b;cin>>b;
    int x=dec(num,a);
    cout<<decToany(x,b);
    return 0;
}