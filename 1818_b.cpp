#include<bits/stdc++.h>
using namespace std;
void solve(){

    long long int a,b,c;
    cin>>a>>b>>c;

    
        if(a==b and a==c){
            cout<<"yes"<<endl;
            return;
        }

       long long int mini=min(a,min(b,c));
       long long int maxi=max(a,max(b,c));
        long long int mid=a+b+c-mini-maxi;
        //if(mini)

        //cout<<mini<<"  "<<mid<<"  "<<mini<<endl;

        if(maxi%mini!=0 || mid%mini!=0){
            cout<<"no"<<endl;
            return;

        }
//         1
// 500000000 1000000000 1000000000

        int count=0;
        count+=maxi/mini-1;
        count+=mid/mini-1;
        if(count<=3){
            cout<<"yes"<<endl;
            return;
        }

        cout<<"no"<<endl;





    

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