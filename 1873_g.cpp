#include<bits/stdc++.h>

//#define int long long int
using namespace std;

void solve(){
   string s;
   cin>>s;

   int n=s.size();

   int  counta=0;
    vector<int>v;
    int j=0;int i;
   for( i=0;i<n;i++){
    if(s[i]=='A')counta++;

    if(s[i]=='B'){
      
      if(i-j>=0){
        v.push_back(i-j);

      }
      j=i+1;

    }

   
    
   }
   if(i!=j)
   v.push_back(i-j);
    if(counta==n || counta==0){
        //v.push_back(n);

        cout<<0<<endl;
        return;
    }

   if(s[0]=='B'||s[n-1]=='B'){
    cout<<counta<<endl;
    return ;
   }

   sort(v.begin(),v.end());
   //cout<<counta<<endl;
//    for(auto i:v){
//     cout<<i<<"  ";
//    }
//    cout<<endl;

   cout<<counta-v[0]<<endl;

  
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