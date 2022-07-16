#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<ll>
#define vii vector<vector<ll>>
#define pi pair<int,int>
#define mp make_pair
#define pb  push_back
#define mod 1e9+7
#define test() ll t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;

ll fact(ll n){
    if(n==1) return 1;
    return n*fact(n-1);
}

ll totalpermute(string s){
    ll n=s.size();
    unordered_map<char,int>mp;
    for(char ch:s){
        mp[ch]++;
    }
    ll deno=0;
    for(auto i:mp){
        if(i.second>1){
            deno+=fact(i.second);
        }
    }
    ll numo=fact(n);
    return numo/deno;
}

void printpermute(string s, string l)
{
    if (s.size() < 1)
        cout << l + s << endl;
    unordered_set<char> uset;
    for (int i = 0; i < s.length(); i++)
    {
        if (uset.find(s[i]) != uset.end())
            continue;
        else
            uset.insert(s[i]);
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        string temp=left+right;
        printpermute(temp, l + s[i]);
    }
}

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //#ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    //#endif 
}


int main() {
    file_i_o();
    string s;
    cin>>s;
    cout<<totalpermute(s)<<endl;
    printpermute(s,"");
    return 0;
}