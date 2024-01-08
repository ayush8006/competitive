#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

    int n;
    cin>>n;

    vector<ll>a(n);

    int countn=0;
    bool flag=false;


    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]==0){

            flag=true;
           
        }

        if(a[i]<0){
            countn++;

        }

    }

    if(flag){
        cout<<0<<endl;
        return;
    }

    if(countn&1){

        cout<<0<<endl;
        return;
    }


    

        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    





    }

int main() {
    
    int t;
    cin >> t;  
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}