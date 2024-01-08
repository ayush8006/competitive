#include<bits/stdc++.h>
using namespace std;

int solve2(int a,int b,vector<vector<int>>&dp){

    if(a==b){
        return 0;

    }

    if(dp[a][b]!=INT_MAX){
        return dp[a][b];
    }

    int ans=INT_MAX;

    for(int i=1;i<a;i++){
        ans=min(ans,solve2(i,b,dp)+solve2(a-i,b,dp)+1);

    }

    for(int i=1;i<b;i++){
        ans=min(ans,solve2(a,i,dp)+solve2(a,b-i,dp)+1);

    }



    return dp[a][b]=ans;
}

void solve(){


    int a,b;
    cin>>a>>b;

    //int ans=0;

    if(a==b){
        cout<< 0 << endl;

        return;


    }

    vector<vector<int>>dp(a+1,vector<int>(b+1,INT_MAX));

    int ans=solve2(a,b,dp);



    cout<<ans<<endl;

    




    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin >> t;  
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}