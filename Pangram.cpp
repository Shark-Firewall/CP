#include <bits/stdc++.h>
#define endl '\n'
#define int long long
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
    string sub="heidi";
    int ssize=s.size();
    int subsize=sub.size();
    int i=0,count=0;
    while(i<ssize && count<subsize){
        if(s[i]==sub[count]) count++;
        i++;
    } 
    cout<<((count==subsize)?"YES":"NO");
    return 0;
}