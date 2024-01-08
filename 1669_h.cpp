#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    int k;
    cin>>n>>k;

    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>bitscount(32,0);


    for(int i=0;i<n;i++){

        int temp=a[i];

        for(int j=30;j>=0;j--){

            if(temp&(1<<j)){
                bitscount[j]++;
            }
        }
    }

    // for(int i=0;i<32;i++){
    //     cout<<bitscount[i]<<" ";
    // }
    // cout<<endl;

    long long ans=0;

    for(int i=30;i>=0;i--){

        if(n-bitscount[i]<=k){

          //  cout<<i<<endl;

            ans+=(1<<i);
            k=k-(n-bitscount[i]);


        }
    }

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