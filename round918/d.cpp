#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;

    string s;
    cin>>s;


    set<char>vow;
    vow.insert('a');
    vow.insert('e');

    set<char>con;
    con.insert('b');
    con.insert('c');
    con.insert('d');

    string ans="";
//int next=;

ans.push_back(s[0]);
ans.push_back(s[1]);

    for(int i=2;i<n;i++){

        if((con.find(s[i])!=con.end()) && (i+1<n && vow.find(s[i+1])!=vow.end()))
        {

            ans.push_back('.');

            
        }

        ans.push_back(s[i]);

    }

    cout<<ans<<endl;



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