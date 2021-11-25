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
    ll a[n];
    for(auto i=0;i<n;i++) cin>>a[i];
    ll max=a[0];
    ll min=a[0];
    ll count=0;
    for(auto i=1;i<n;i++){
       if(a[i]>max){
            count++;
            max=a[i];
       }
       else if(a[i]<min){
            count++;
            min=a[i];
       }
    }
    cout<<count<<endl;
    return 0;
}