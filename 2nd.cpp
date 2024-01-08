#include<bits/stdc++.h>

//#define int long long int
using namespace std;
int calculate(vector<int>&a,int n){
    int ans=1;
    for(int i=0;i<n;i++){
        ans*=a[i];
    }return ans;
}
 
void solve(){
   int n;
   cin>>n;
   vector<int>a(n);
   int ans=1;
   int maxi=0;

   for(int i=0;i<n;i++){
    cin>>a[i];
    ans*=a[i];
        
   }

   sort(a.begin(),a.end());
   int c=0;
   int i=0;
   while(i<n and a[i]==0){
    c++;
    i++;

   }
   if(c>1){
    cout<<0<<endl;
    return;
    }
    if(a[0]==0){
        a[0]=1;
        ans=calculate(a,n);
        cout<<ans<<endl;
        return;
    }

   for(int i=0;i<n;i++){
    

    
        ans=ans/a[i];
        ans=ans*(a[i]+1);



    maxi=max(maxi,ans);
    ans=ans/(a[i]+1);
        ans=ans*(a[i]);

   

   }
    cout<<maxi<<endl;
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