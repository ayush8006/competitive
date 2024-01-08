#include<bits/stdc++.h>
using namespace std;
//#define int long long

bool isvalid(int mid,vector<int>&f, vector<int>&h,int k,int n) {
    int sum=f[0];

    if(mid==0)return true;
    if(mid==1){
        for(int i=0;i<n;i++){
            if(f[i]<=k)return true;
        }
    }

    int j=0;
    int count=1;
    int l=1;
    

    for(int i=1;i<n;i++){

        if(h[i-1]%h[i]==0){
            //count++;
            sum+=f[i];
            l=i-j+1;
            if(l==mid  and sum<=k)return true;
            while(sum>k){
                sum-=f[j];
                j++;

            }

            //j++;



        }
        else{
            //count=1;
            j=i;
            sum=f[i];
            l=1;
        }


    }

    return false;
}

void solve() {

    int n,k;
    cin>>n>>k;
    vector<int>f(n),h(n);
    for(int i=0;i<n;i++){
        cin>>f[i];

    }
    for(int i=0;i<n;i++){
        cin>>h[i];
        
    }
    int low=0;
    int high=n+1;
    int ans=0;
    while(low<=high){

        int mid=(high-low)/2+low;

        if(isvalid(mid,f,h,k,n)){

            //cout<<mid<<" "<<low<<" "<<high<<endl;
            ans=mid;
            low=mid+1;

            

        }
        else{
            high=mid-1;

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
    }

    return 0;
}
