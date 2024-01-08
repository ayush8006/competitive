#include<bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
vector<long long>dp(100000,0);


for(int i=1;i<100000;i++){
    dp[i]=dp[i-1]+3*i-1;    
}


int ans=0;

while(n>1){
int i = upper_bound(dp.begin(),dp.end(),n)-dp.begin();
//cout<<i<<endl;
i--;
ans++;
n=n-dp[i];
}

cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;


  
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}