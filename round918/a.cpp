#include<bits/stdc++.h>
using namespace std;

void solve(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a==b){
        cout<<c<<endl;
        return ;
    }
    if(c==b){
        cout<<a<<endl;
        return ;
    }
    else{

         cout<<b<<endl;
        return ;

    }

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