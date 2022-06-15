#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    test(){
    	int input;cin>>input;
    	if(input<38) cout<<input<<endl;
    	else{
    		int mul5=((input/5)*5)+5;
    		if((mul5-input)<3) cout<<mul5<<endl;
    		else cout<<input<<endl;
    	}
    }
    return 0;
}