#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(auto i=1;i<=n;i++)
    {
        if(i==n && i%2==1) cout<<"I hate it";
        else if(i==n && i%2==0 ) cout<<"I love it";
        else if(i%2==1) cout<<"I hate that ";
        else cout<<"I love that ";
    }
    cout<<endl;
    return 0;
}

