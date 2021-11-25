#include <bits/stdc++.h>
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll x;
    cin>>x;
    vector <ll> v(n+1,0);
    ll a[x];
    for(auto i=0;i<x;i++){
        cin>>a[i];
        v[a[i]]++;
    }
    ll y;
    cin>>y;
    ll b[y];
    for(auto i=0;i<y;i++){
        cin>>b[i];
        v[b[i]]++;
    }
    bool flag=true;
    for(auto i=1;i<=n;i++){
        if(v[i]==0){
             flag=false;
             break;
        }
    }
    if(flag) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}