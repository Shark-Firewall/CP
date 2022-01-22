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

int countPoints(string s) {
    vector<vector<int>> v(10,vector<int>(3,0));
    for(int i=0;i<s.size();i++){
        char val=s[i];
        i++;
        int idx=int32_t(s[i]);
        if(val=='R'){
        	v[idx-48][0]=1;
        }
        else if(val=='G'){
        	v[idx-48][1]=1;
        }
        else{
        	v[idx-48][2]=1;
        }
    }
    int count=0;
    for(int i=0;i<10;i++){
    	if(v[i][0]==1 and v[i][1]==1 and v[i][2]==1) count++;
    }
    return count;
}

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    cout<<countPoints(s);
    return 0;
}