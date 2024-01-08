
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

    string s,t;
    cin>>s>>t;

    int n=s.size();
    int m=t.size();

    if (n < m) {
        cout << "0" << endl;
        return;
    }
    pair<int,int>pow={1,1};

    for(int i=1;i<m;i++){
        pow.first=(1LL*pow.first*p.first)%mod.first;
        pow.second=(1LL*pow.second*p.second)%mod.second;

    }

    pair<int,int>ht=get_hash(t);
    pair<int,int>hs=get_hash(s.substr(0,m));

    int count=0;
    if(hs==ht){
        count++;
    }

    for(int r=m;r<n;r++){

        int l = r-m;
        //calculating new hash

        int del=(1LL*(s[l]-'a'+1)*pow.first)%mod.first;
        int add=((s[r]-'a'+1));
        hs.first=((1LL*(hs.first-del+mod.first)*p.first+add)%mod.first);

        int del2 = (1LL * (s[l] - 'a' + 1) * pow.second) % mod.second;
        int add2 = (s[r] - 'a' + 1);
        hs.second = (1LL * (hs.second - del2 + mod.second) * p.second + add2) % mod.second;

         if(hs==ht){
            count++;
         }        
    }
     cout<<count<<endl;
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