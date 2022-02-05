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

bool checkIfPangram(string s){
    set<char>ans;
    for(int i=0;i<s.size();i++){
    	ans.insert(s[i]);
    }
    if(ans.size()==26) return true;
    return false;
}

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    checkIfPangram(s)?cout<<"true":cout<<"false";
    return 0;
}