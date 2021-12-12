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
    int n;
    cin>>n;
    int star=(n+1)/2;
    int space=1;
    for(int i=1;i<=n;i++){
    	for(int x=1;x<=star;x++){
    		cout<<"*"<<"\t";
    	}
    	for(int y=1;y<=space;y++){
    		cout<<"\t";
    	}
    	for(int z=1;z<=star;z++){
    		cout<<"*"<<"\t";
    	}
    	if(i<((n+1)/2)){
    		space+=2;
    		star-=1;
    	}
    	else{
    		space-=2;
    		star+=1;
    	}
    	cout<<endl;
    }
    return 0;
}