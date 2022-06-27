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
    test()
    {
        int n;
        cin>>n;
        vi v;
        int p=1;
        while(n)
        {
            if(n%10){
                v.pb((n%10)*p);
            }
            n/=10; p*=10;
        }
 
        cout<<v.size()<<endl;
        for(auto pr:v){
            cout<<pr<<" ";
        }
        cout<<endl;
    }
    return 0;
}