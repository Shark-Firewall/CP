#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll count=1;
    ll a[n];
    for(auto i=0;i<n;i++) cin>>a[i];
    for(auto i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}

