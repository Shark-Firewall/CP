#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll g;
    ll a[n+1];
    for(auto i=1;i<=n;i++){
        cin>>g;
        a[g]=i;
    }
    for(auto i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

