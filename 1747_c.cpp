#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin>>n;
    vector<int>v(n);
    int even=1;


    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]&1){

            even=!even;


            
        }
        

    }

    if(even){
        cout<<"bob"<<endl;
        return;

    }
    cout<<"alice"<<endl;



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