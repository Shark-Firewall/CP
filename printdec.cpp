#include <bits/stdc++.h>
using namespace std;

void printDecreasing(int n){
    // write your code here
    if(n==0) return;
    cout<<n<<endl;
    return printDecreasing(n-1);
    
}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}