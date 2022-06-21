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
    test(){
    	int n;
    	cin>>n;
    	
        int count=1;

        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++)
                   cout<<count++<<" ";
                cout<<endl;
            }
            else{
                count+=n-1;
                for(int j=0;j<n;j++){
                    cout<<count--<<" ";
                }
                cout<<endl;
                count+=n+1;
            }
        }
    }
    return 0;
}