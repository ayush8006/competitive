#include<bits/stdc++.h>
using namespace std;

void solve(){

    map<char,int>mp;

    for(int i=0;i<9;i++){
        char x; 


        cin>>x;

        mp[x]++;



        

    }

   
        if(mp['A']<3){
            cout<<'A'<<endl;
        }

        else if(mp['B']<3){
            cout<<'B'<<endl;
        }
         else if(mp['C']<3){
            cout<<'C'<<endl;
        }

        return;
  

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