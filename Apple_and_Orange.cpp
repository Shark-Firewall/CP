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
    int s ,t;// s- left starting point t- right starting point
    cin>>s>>t;
    int a, b;// a- apple tree position b-orange tree position
    cin>>a>>b;
    int m, n;// m- number of apple n- number of orange
    cin>>m>>n;
    vi l(m); vi r(n);
    for(int i=0;i<m;i++) cin>>l[i];
    for(int i=0;i<n;i++) cin>>r[i];
    int left=0;
    int right=0;
    for(int i=0;i<m;i++){
    	int temp1=l[i]+a;
    	if(temp1>=s and temp1<=t) left++;
    }
    for(int i=0;i<n;i++){
    	int temp2=r[i]+b;
    	if(temp2>=s and temp2<=t) right++;
    }
    cout<<left<<endl;
    cout<<right<<endl;
    return 0;
}




// 5(a)       7(s)           (t)11        15(b)