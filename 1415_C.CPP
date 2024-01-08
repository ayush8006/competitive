#include<bits/stdc++.h>
using namespace std;



void solve(){
    
    int n,p,k;

    cin>>n>>p>>k;

    // 
    

    string a;
    cin>>a;


    int x,y;

    cin>>x>>y;

    vector<int>dp(n,0);

    for(int i=n-1;i>=0;i--){
        if(a[i]=='0'){
            dp[i]=1+((i+k < n) ? dp[i+k] : 0);
        }
        else{
             dp[i]=0+((i+k < n) ? dp[i+k] : 0);
        }
    }



    int ans=INT_MAX;

    for(int i=1;i<n;i++){

        ans=min(ans,i*y + ((i+k-1<n)?dp[i+k-1]*x:0));


    }

    cout<<ans<<endl;

    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;  
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}