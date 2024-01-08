#include<bits/stdc++.h>

//#define int long long int
using namespace std;
 
void solve(){
     int n,k,x;
    cin>>n>>k>>x;

    if((x+1<k)||(k>n)){
        cout<<-1<<endl;
        return;
    }
    int ans=0;

    for(int i=0;i<k;i++){

        ans+=i;


    }
    for(int i=k;i<n;i++){
       if(x!=k) ans+=x;

       else{
        ans+=x-1;
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