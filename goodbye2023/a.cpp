#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    int k;

    cin>>n;cin>>k;

    vector<int>b(n);

    int mul=1;


    for(int i=0;i<n;i++){

        cin>>b[i];
        mul=mul*b[i];

    }

    if(2023%mul!=0){
        cout<<"no"<<endl;
        return;

    }

   int r=2023/mul;

   cout<<"yes"<<endl;

   for(int i=0;i<k-1;i++){

    cout<<1<<" ";

   }

   cout<<r<<endl;



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