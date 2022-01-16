#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define loopin(start,dest,vect) for(int i=start;i<dest;i++) cin>>vect[i]
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<string> divideString(string s, int k, char fill) {
    vector<string>ans;
    while((s.size()%k)!=0){
        s+=fill;
    }
    int i=0;
    while(i<s.size()){
        ans.push_back(s.substr(i,k));
        i=i+k;
    }
    return ans;
    }

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    int k;cin>>k;
    char fill;cin>>fill;
    for(auto i:divideString(s,k,fill)){
    	cout<<i<<endl;
    }
    return 0;
}