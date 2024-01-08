#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,m;
    cin>>n>>m;

    string x,s;
    cin>>x;
    cin>>s;

    int count=0;

   if (x.find(s) != string::npos)
        {
            cout<< 0<<endl;
            return ;
        }


    //if(s.substr)
    do{
        x=x+x;

        n=2*n;
        count++;
        if (x.find(s) != string::npos)
        {cout<<count<<endl;
        return;
        }

        

    }
    while(n<m);

    x=x+x;

        n=2*n;
        count++;
        if (x.find(s) != string::npos)
        {cout<<count<<endl;
        return;
        }

    cout<<-1<<endl;

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