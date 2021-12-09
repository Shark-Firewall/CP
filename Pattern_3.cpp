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
    int space=n-1;
    int star=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<"\t";
        }
        for(int k=1;k<=star;k++){
            cout<<"*"<<"\t";
        }
        star++;
        space--;
        cout<<endl;
    }
    return 0;
}
