#include <bits/stdc++.h>
#define ll long long
#define test() ll t;cin>>t;while(t--)
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(){
        ll a;
        cin>>a;
        std::vector<ll> v(a);
        for(auto i=0;i<a;i++) cin>>v[i];
        sort(v.begin(), v.end());
        bool ans=true;
        for(auto i=1;i<a;i++){
            ans &= (v[i]-v[i-1]<=1);
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}