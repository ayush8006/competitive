#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,k;


    cin>>n>>k;

    vector<int>a(n);
    bool flag=false;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==k)flag=true;
    }

    if(flag){
        cout<<"yes"<<endl;
        return;

    }
    cout<<"no"<<endl;
    //return;



}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}