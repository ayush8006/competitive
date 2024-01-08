#include<bits/stdc++.h>
using namespace std;

int solve(int i,vector<int>&a,vector<vector<int>>&occurrences,vector<int>&dp,int n){


if(i>=n)return 0;

if(dp[i]!=-1)return dp[i];

if(occurrences[a[i]].size()==0)
return 1+solve(i
+1,a,occurrences,dp,n);

int ans=1e9+7;

for(int j=0;j<occurrences[a[i]].size();j++){


    if(occurrences[a[i]][j]>i){

        int sum=solve(occurrences[a[i]][j]+1,a,occurrences,dp,n);

        ans=min(ans,sum);

    }
    
}
int sum2=1+solve(i+1,a,occurrences,dp,n);
    return dp[i]=min(ans,sum2);




}

int main() {
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];

   }


   vector<vector<int>>occurrences;

   for(int i=0;i<n;i++){
    occurrences[a[i]].push_back(i);
   }
   vector<int>dp(2e5+5,-1);

   int ans=solve(0,a,occurrences,dp,n);

   cout<<ans<<endl;





    return 0;
}