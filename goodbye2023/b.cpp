#include<bits/stdc++.h>
using namespace std;

void solve(){

    long long int a,b;
    cin>>a>>b;

   

   if(b%a==0){
        long long int y=b/a;

        cout<<(b*y)<<endl;

        return;

    }

    long long int ans=a*b;

    int x=__gcd(a,b);



    ans=ans/x;

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