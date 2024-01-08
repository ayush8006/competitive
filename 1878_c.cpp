#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k,x;
    cin>>n>>k>>x;

    long long maxi=(n*(n+1))/2;
    long long ex=((n-k)*(n-k+1))/2;

    long long tot=maxi-ex;
    if (tot<x){
        cout<<"no"<<endl;
        return;
    }

    if((k*(k+1)/2)>x){
       cout<<"no"<<endl;
        return;
    }

    cout<<"yes"<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}