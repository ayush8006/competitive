#include <bits/stdc++.h>
using namespace std;

long long solve(int n){

if(n==1)return 1;

long long ans=0;

if(n&1){
     ans=ans+1+solve(3*n+1);

}

else{
    ans+=1+solve(n/2);
}
    return ans;
    
}

int main() {
    // your code goes here
    
    int t = 1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        cout<<solve(n);
        
    }

}