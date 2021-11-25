#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a;
    cin>>b;
    for(auto i=0;i<a.size();i++){
    	if(a[i]==b[i]) cout<<0;
    	else cout<<1;
    }
    cout<<endl;
    return 0;
}
