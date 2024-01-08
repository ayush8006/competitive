#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;

    string s;
    cin>>s;  

    map<char,int>mp;

   int  ans=1;

    int contri=1;
    mp[s[0]]++;
    

    
    for(int i=1;i<n;i++){

        if(mp.find(s[i])!=mp.end()){
            ans=ans+contri;
        }

        else{
            contri++;
            ans+=contri;

            
        }

        mp[s[i]]++;


    }

    cout<<ans<<endl;

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