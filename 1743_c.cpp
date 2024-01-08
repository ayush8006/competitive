#include<bits/stdc++.h>
using namespace std;

// int solve2(int i,string &s,vector<int>&v,int n, vector<int>&dp){

//     if(i==n)return 0;

//     if(dp[i]!=-1)return dp[i];

//     if(s[i]=='1'){
//         return dp[i]=v[i]+solve2(i+1,s,v,n,dp);
//     }

//     else if(i<n-1 and s[i+1]=='1'){

//         s[i+1]='0';
//         int take=v[i]+solve2(i+1,s,v,n,dp);
//         s[i+1]='1';

//         int not_take=solve2(i+1,s,v,n,dp);

//         return dp[i]=max(take,not_take);

//     }

//     else return dp[i]=solve2(i+1,s,v,n,dp);



    


// }
void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;

    for(int i=0;i<n;i++){

        if(s[i]=='1'){
            ans+=v[i];
        }

        else if(i+1<n and s[i+1]=='1'){
            ans+=v[i];
            int mini=v[i];            

             int j=i+1;
            while(j<n and s[j]=='1'){

                ans+=v[j];
                mini=min(v[j],mini);
                j++;

            }
            i=j-1;

            ans=ans-mini;
            
        }
        

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