#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<int>v(n);
    for(auto i=0;i<n;i++) cin>>v[i];
    ll ans=count(v.begin(), v.end(),1);
    if(ans>0) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}

