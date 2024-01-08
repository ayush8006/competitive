#include<bits/stdc++.h>

//#define int long long int
using namespace std;

 
void solve(){
  vector<vector<char>>dp(10,vector<char>(10));

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        cin>>dp[i][j];

    }
  }

  int ans=0;

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
       // cin>>dp[i][j];

       if(dp[i][j]=='X'){

       int val=min({i+1,j+1,10-i,10-j});
       ans+=val;

       }

    }
  }

  cout<<ans<<endl;
  
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
	solve();
     }
 
 
	return 0;
}