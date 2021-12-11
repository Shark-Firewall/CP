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

int32_t main(){
    FIO;
    int a,b,c;
    cin>>a>>b>>c;

    int max=a;
    if(b>max) max=b;
    else if(c>max) max=c;

    if(max==a) (((b*b)+(c*c))==(a*a))? cout<<"true": cout<<"false";
    else if(max==b) (((a*a)+(c*c))==(b*b))? cout<<"true": cout<<"false";
    else if(max==c) (((b*b)+(a*a))==(c*c))? cout<<"true": cout<<"false";

    return 0;
}