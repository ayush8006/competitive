#include<bits/stdc++.h>

//#define int long long int
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    int ct=0;

    //for(int i=0;i<3;i++){
        if(s[0]!='a')ct++;
        if(s[1]!='b')ct++;
        if(s[2]!='c')ct++;
   // }

   if(ct<=2)cout<<"yes"<<endl;
   else cout<<"no"<<endl;
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