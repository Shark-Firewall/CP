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

int first_index(vi &v,int i,int x){
    if(i==v.size()-1) return;
    if(v[i]==x){
        return i;
    }
	int equal=first_index(v,i+1,x);
	return equal; 
}

int32_t main(){
    FIO;
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int x;cin>>x;
    cout<<first_index(v,0,x)<<endl;
    return 0;
}