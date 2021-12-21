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
    int n;
    cin>>n;
    int os=n/2;
    int is=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=os;j++){
            cout<<"\t";
        }
        cout<<"*\t";
        for(int k=1;k<=is;k++){
            cout<<"\t";
        }
        if(i>1 and i<n){
            cout<<"*\t";
        }
        if(i<=n/2){
            os--;
            is+=2;
        }
        else{
            os++;
            is-=2;
        }
        cout<<endl;
    }
    return 0;
}