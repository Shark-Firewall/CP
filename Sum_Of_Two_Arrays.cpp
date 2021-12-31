#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define loopin(start,dest,vect) for(int i=start;i<dest;i++) cin>>vect[i]
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void addarry(vi a,int n1,vi b,int n2){
    int m=max(n1,n2);
    vi res(0,m);
    int temp=m-1;
    while(n1>=0 && n2>=0){
        res[temp]=a[n1-1]+b[n2-1];
        n1--;
        n2--;
        temp--;
    }
    if(n1>=0){
    	res[temp]=a[n1-1];
    	n1--;
    	temp--;
    }
    if(n2>=0){
    	res[temp]=b[n2-1];
    	n2--;
    	temp--;
    }
    for(int i=0;i<res.size();i++){
    	cout<<res[i]<<endl;
    }
}

int32_t main(){
    FIO;
    int n1;cin>>n1;
    vi a(n1);
    loopin(0,n1,a);
    int n2;cin>>n2;
    vi b(n2);
    loopin(0,n2,b);
    addarry(a,n1,b,n2);
    return 0;
}