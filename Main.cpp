#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    unordered_set<char>st;
    string s;
    cin>>s;
    // int count=0;
    for(int i=0;i<s.size();i++){
        char a=s[i];
        st.insert(a);
    }
    for(auto pr:st){
        cout<<pr<<endl;
    }
    // if(count%2) cout<<"IGNORE HIM!"<<endl;
    // else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}