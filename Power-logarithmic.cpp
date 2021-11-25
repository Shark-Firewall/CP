#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    // write your code here
    if(n==0) return 1;

    int p=powerLogarithmic(x,n/2);
    int res=p*p;

    if(n&1) res=res*x;

    return res;
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}