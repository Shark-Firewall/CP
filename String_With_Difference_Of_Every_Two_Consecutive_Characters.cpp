#include <bits/stdc++.h>
#define endl '\n'
// #define int long long
#define pb push_back
#define vi vector<int>
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    string res="";
    res+=s[0];
    for(int i=1;i<s.size();i++){
        int temp=int(s[i])-int(s[i-1]);
        res+=to_string(temp);
        res+=s[i];
    }
    cout<<res<<endl;
    return 0;
}