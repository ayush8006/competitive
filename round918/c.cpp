#include<bits/stdc++.h>
using namespace std;
//  bool isperfect(int num){

//     for(int i=2;i*i<=num)
//  }
void solve(){


    int n;
    cin>>n;

    vector<int>a(n);

    long long int sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];

    }

    long long int low=sqrtl(sum);


    if(low*low==sum){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

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