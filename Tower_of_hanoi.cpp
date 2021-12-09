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

void toh(int n, int t1id, int t2id, int t3id){
	if(n==1){
		cout<<n<<"["<<t1id<<"->"<<t2id<<"]"<<endl;
		return;
	}
	toh(n-1,t1id,t3id,t2id);
	cout<<n<<"["<<t1id<<"->"<<t2id<<"]"<<endl;
    toh(n-1,t3id,t2id,t1id);
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    int n1,n2,n3;cin>>n1>>n2>>n3;
    toh(n, n1, n2, n3);
    return 0;
}