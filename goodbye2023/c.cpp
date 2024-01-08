#include <bits/stdc++.h>
using namespace std;
const long long mod=(1LL<<32);


void solve(){
    
    long long ans=0;
    
    int q,s,a,b;
    
    bitset<1000000007>vis;
    
    cin>>q>>s>>a>>b;
    
    while(q--){
        
        if(s&1){
            
            long long num=s/2;
            
            if(vis[num]==0){
                ans+=num;
                vis[num]=1;
            }
            
            
        }
        else{
            
            
            long long num=s/2;
            
            if(vis[num]==1){
                ans-=num;
                vis[num]=0;
            
        }
        
        
    }
    
    s=((a*s)+b)%mod;
    
    }
    
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    solve();
	    
	}

}
