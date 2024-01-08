#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    char ch;
    cin>>n;
    cin>>ch;

    string s;
    cin>>s;
    if(ch=='g'){
        cout<<0<<endl;
        return;
    }
    s=s+s;
    int i=-1;int j=-1;
    int ans=0;
    while(j<n){
        j++;

        if(s[j]==ch){
            for(int i=j+1;i<2*n;i++){
                if(s[i]=='g'){
                    ans=max(ans,i-j);
                    j=i;
                    break;
                }


            }
        }
    }

    cout<<ans<<endl;


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