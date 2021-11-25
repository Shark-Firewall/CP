#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll sum=0;
    cin.ignore();
    while(n--){
        ll p,q;
        cin>>p>>q;
        if((q-p)>=2) sum++;
    }
    cout<<sum<<endl;
    return 0;
}

