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

int getSum(int b, int n1, int n2) {
    int result=0;
    int power=1;
    int carry=0;
    while(n1!=0 or n2!=0 or carry!=0){
        int sum=n1%10+n2%10+carry;
        n1/=10;
        n2/=10;
        int rem=sum%b;
        result+=(rem*power);
        carry=sum/b;
        power*=10;
    }
    return result;
}

int onetone(int b, int n1,int n2){
    int ans=0;
    int carry=0;
    int power=1;
    while(n1!=0 or carry!=0){
    	int pro=((n1%10)*n2)+carry;
    	n1/=10;
    	int rem=pro%b;
    	ans+=(rem*power);
    	carry=pro/b;
    	power*=10;
    }   
    return ans;
}

int getProduct(int b, int n1, int n2){
	int ans=0;
	int power=1;
	while(n2!=0){
		int n2l=n2%10;
		n2/=10;
		int prevdigitans=onetone(b,n1,n2l);
		ans=getSum(b,ans,prevdigitans*power);
        power*=10;
	}
	return ans;
}

int32_t main(){
    FIO;
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getProduct(b,n1,n2)<<endl;
    return 0;
}