#include<bits/stdc++.h>
using namespace std;



/*   thought process  */
//value of ---->m
pair<const int ,const int>mod={1e9+7,1e9+9};

//value of ---->p
pair<const int ,const int>p={53,59};


pair<int, int> get_hash(string s) {
    int n = s.size();
    pair<int, int> ans = {0, 0};

    for (int i = 0; i < n; i++) {
        ans.first = (1LL * ans.first * p.first + (s[i] - 'a' + 1)) % mod.first;
        ans.second = (1LL * ans.second * p.second + (s[i] - 'a' + 1)) % mod.second;
    }
    return ans;
}

void solve(){

    string s;
    cin>>s;

    int n=s.size();
    
   
    pair<int,int>pow={1,1};

    for(int i=1;i<n;i++){
        pow.first=(1LL*pow.first*p.first)%mod.first;
        pow.second=(1LL*pow.second*p.second)%mod.second;

    }

    for(int i=1;i<n;i++){

    }

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   // cin >> t;
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}