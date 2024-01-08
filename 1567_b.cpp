#include<bits/stdc++.h>
using namespace std;

vector<int> arr(300000);



void solve(){

    int a;
    int b;
    cin>>a>>b;

    int xo=arr[a-1];

    if(xo==b){
        cout<<a<<endl;
        return;
    }


    else if((xo^b)==a){
        cout<<a+2<<endl;

        return;
    }

    

    else{
        cout<<a+1<<endl;
    }



    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    arr.clear();
    arr[0]=0;

    for(int i=1;i<300000;i++){
        arr[i]=(arr[i-1]^i);

    }
    int t=1;
    cin >> t;  
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}