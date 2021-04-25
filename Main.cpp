#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        cout<<(-(n+1)/2)<<endl;
    }
    return 0;
}

