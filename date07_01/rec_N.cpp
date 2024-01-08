#include<bits/stdc++.h>
using namespace std;

void solve2(int i,int j,int r,int c,vector<vector<int>>&a,vector<vector<int>>&b){

if(i>=r){
    return;

}

else if(j==c){

    cout<<endl;
    solve2(i+1,0,r,c,a,b);

    //return;
}



cout<<a[i][j]+b[i][j]<<" ";

solve2(i,j+1,r,c,a,b);




}

void solve(){

    int r,c;

    cin>>r>>c;

    vector<vector<int>>a(r,vector<int>(c));
    vector<vector<int>>b(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            cin>>a[i][j];

        }
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            cin>>b[i][j];

        }
    }

     //vector<vector<int>>ans(r,vector<int>(c));

     solve2(0,0,r,c,a,b);


    }

int main() {
   int t=1;
   //cin>>t;
   while(t--){
    solve();
   }
    return 0;
}