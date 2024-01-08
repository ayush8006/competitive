#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,q;
    cin>>n>>q;

    vector<int>steps(n),queries(q);
    vector<int>st;

    for(int i=0;i<n;i++){
        cin>>steps[i];
        st.push_back(steps[i]);

    }
     for(int i=0;i<q;i++){
        cin>>queries[i];
        
    }
    
    sort(st.begin(),st.end());
    unordered_map<int,long long>mp;

    int maxi=0;
    long long sum=0;

    for(int i=0;i<n;i++){

        maxi=max(maxi,steps[i]);
        sum+=steps[i];
        mp[maxi]=sum;



    }

    for(int i=0;i<q;i++){
        int e=(lower_bound(st.begin(),st.end(),queries[i])-st.begin());

         if(e>=0 and st[e]==queries[i]){
            cout<<mp[st[e]]<<" ";
            //return;
         }
        
       else if(e>=1)
        {
            e=e-1;

            cout<<mp[st[e]]<<" ";
            //return ;
        }
          else 
          //e=e-1;
        cout<<0<<" ";



        //else
    }

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