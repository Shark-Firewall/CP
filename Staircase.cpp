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
    int n;cin>>n;
    int space=n-1;
    int pattern=1;
    for(int i=1;i<=n;i++){
    	for(int x=1;x<=space;x++) cout<<" ";
    	for(int y=1;y<=pattern;y++) cout<<"#";
    	cout<<endl;
        space--;
        pattern++;
    }
    return 0;
}