#include<bits/stdc++.h>

//#define int long long int
using namespace std;

void solve(){

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;

    int i=0;
    for(;i<n;){

    if(s[i]!='B'){

        i++;



    }

   else if(i<n){
        ans++;
        i=i+k;
    }
    }

    cout<<ans<<endl;
}
   


int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
	solve();
     }
 
 
	return 0;
}