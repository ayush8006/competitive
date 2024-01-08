#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    int m;

    cin>>n>>m;

    vector<int>edges[n];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        u--;
        v--;

        edges[u].push_back(v);
        edges[v].push_back(u);

    }

    vector<int>visited(n,0);

    vector<vector<int>>components;

    vector<int>curr_comp;

    function<void(int)> dfs=[&](int cur){
        curr_comp.push_back(cur+1);
        visited[cur]=1;

        for(auto next:edges[cur]){
            if(!visited[next]){
                dfs(next);
            }
        }

    };


    for(int i=0;i<n;i++){
        if(!visited[i]){
            curr_comp.clear();
            dfs(i);
            components.push_back(curr_comp);

        }
    }

    vector<int>ones,twos,threes;

    int x=components.size();

    for(int i=0;i<x;i++){

        if(components[i].size()>3){
            cout<<-1<<endl;
            return;

        }

        else if(components[i].size()==3){
            threes.push_back(i);

        }
        else if(components[i].size()==2){
            twos.push_back(i);

        }
        else if(components[i].size()==1){
            ones.push_back(i);

        }
    }

    if(twos.size()>ones.size()){
        cout<<-1<<endl;
        return;

    }

    for(auto it:threes){
        for(auto itt:components[it]){
            cout<<itt<<" ";
        }
        cout<<"\n";
    }

    int count=0;

    for(int i=0;i<ones.size();i++){
        if(i<twos.size()){
            cout<<components[twos[i]][0]<<" "<<components[twos[i]][1]<<" "<<components[ones[i]][0]<<endl;;
        }

        else{
            if(count==3){
                count==0;
                cout<<endl;

            }

            cout<<components[ones[i]][0]<<" ";
            count++;
        }

        
    }

    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   // cin >> t;


  
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}