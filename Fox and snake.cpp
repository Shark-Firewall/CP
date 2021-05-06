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
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%4==2){
            for(int j=1;j<m;j++) cout<<".";
            cout<<"#"<<endl;;
        }
        else if(i%4==0){
            cout<<"#";
            for(int j=2;j<=m;j++) cout<<".";
            cout<<endl;
        }
        else{
            for(int j=1;j<=m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
    }
    return 0;
}