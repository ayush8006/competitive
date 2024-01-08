#include<bits/stdc++.h>
using namespace std;

void solve(){

   int n;
   cin>>n;

   vector<int>a(n);

   int count=0;
   for(int i=0;i<n;i++){
    cin>>a[i];

   }

   for(int i=1;i<n;i++){
    if(a[i]>a[i-1])count++;

   }

   if(count<2){
    cout<<0<<endl;
    return;
   }

   else{
    cout<<count-1<<endl;
    return;
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