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
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
    	int a;cin>>a;
    	if(a==1){
            count++;
    	}
    }
    cout<<(count?"HARD":"EASY")<<endl;
    return 0;
}