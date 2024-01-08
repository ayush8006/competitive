#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;

    cin>>n;
    vector<vector<char>>v(n,vector<char>(n));

    vector<vector<bool>>visited(n,vector<bool>(n,false));


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            
        }
    }
     int ans=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(!visited[i][j]){
                char ch1,ch2,ch3,ch4;
                         
           
               visited[i][j]=true;

               ch1=v[i][j];
               int temp=i;
               i=j;
               j=n-1-temp;

               visited[i][j]=true;

               ch2=v[i][j];
                temp=i;
               i=j;
               j=n-1-temp;

               visited[i][j]=true;

               ch3=v[i][j];
                temp=i;
               i=j;
               j=n-1-temp;

               visited[i][j]=true;

               ch4=v[i][j];
                temp=i;
               i=j;
               j=n-1-temp;
               char mini=max({ch1,ch2,ch3,ch4});


              
                ans+=abs(mini-ch1);
                ans+=abs(mini-ch2);
                ans+=abs(mini-ch3);
                ans+=abs(mini-ch4);

               
                
            }
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