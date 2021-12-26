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

int getDifference(int b, int n1, int n2){
    int ans=0;
    int borrow=0;
    int power=1;
    while(n2!=0){
    	int n1l=n1%10;
    	int n2l=n2%10;
    	n1/=10;
    	n2/=10;
    	int diff=(n2l-borrow)-n1l;
    	if(diff<0){
    		borrow=1;
    		diff+=b;
    	}
    	else{
    		borrow=0;
    	}
    	ans+=(diff*power);
    	power*=10;

    }
    return ans;
}
int32_t main(){
    FIO;
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getDifference(b,n1,n2);
    return 0;
}