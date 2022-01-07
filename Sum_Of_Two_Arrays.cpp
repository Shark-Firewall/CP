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
            //   a     // //   b    //
void addarry(int a,vi x,int b,vi y){
    int m=max(a,b);
    vi ans(m);
    int i=a-1;
    int j=b-1;
    int k=m-1;
    int carry=0;
    while(k>=0){
        int sum=x[i]+y[j]+carry;
        int q=sum/10;
        int r=sum%10;
        
        ans[k]=r;
        carry=q;
        i--;j--;k--;
    }
    if(carry!=0) cout<<carry<<endl;
    for(int i=0;i<m;i++) cout<<ans[i]<<endl;
}

int32_t main(){
    FIO;
    int a;cin>>a;
    vi x(a);
    loopin(0,a,x);
    int b;cin>>b;
    vi y(b);
    loopin(0,b,y);
    //fuction call
    addarry(a,x,b,y);
    return 0;
}