#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin>>n;

    vector<int>v(n);

    int pow=n;


    for(int i=0;i<n;i++){
        cin>>v[i];
        pow=pow-log2(v[i]&(-v[i]));


    }

    vector<int>power;
    for(int i=1;i<=n;i++){
        if(log2(i&(-i))>0){
            power.push_back(log2(i&(-i)));

        }
    }

    sort(power.rbegin(),power.rend());
    int count=0;

    int m=power.size();
    for(int i=0;i<m;i++){
        if(power[i]<=pow ){
            pow=pow-power[i];
            count++;

        }
    }

    //cout<<pow<<endl;
    if(pow>0){
        cout<<-1<<endl;
        return ;

    }
    cout<<count<<endl;





}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }

    return 0;
}