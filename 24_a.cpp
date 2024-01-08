#include<bits/stdc++.h>
using namespace std;


   vector<int>arr;
    bool visited[105];

 void dfs(int i,vector<int>adj[]){

  visited[i]=true;
    arr.push_back(i);       

    for(auto it:adj[i]){

           if(!visited[it])dfs(it,adj);

        }
    }

void solve(){

    int n;
    cin>>n;

    int sum=0,sum2=0;

    map<pair<int,int>,int>mp;

    vector<int>adj[n+1];

    for(int i=0;i<=n;i++){
        visited[i]=false;

    } 


    for(int i=0;i<n;i++){

        int a,b,c;
        cin>>a>>b>>c;

        mp[{a,b}]=c;
        sum+=c;

        adj[a].push_back(b);
        adj[b].push_back(a);

        
  }

  dfs(1,adj);

  for(int i=0;i<n;i++)
  {
    int a=arr[i];
    int b=arr[(i+1)%n];

    if(mp.find({a,b})!=mp.end()){
        sum2+=mp[{a,b}];
    }

  }

  sum=min(sum-sum2,sum2);
  cout<<sum<<endl;


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