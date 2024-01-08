#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
    cin>>n;

    vector<int>a(n); 

    vector<long long int>presum1;
    vector<long long int>presum2;

    long long int ev=0;
    long long int od=0;


    for(int i=0;i<n;i++){
        cin>>a[i];

        if(i&1){
            od=a[i];
            presum1.push_back(od);
        }
        else{
             ev=a[i];
            presum2.push_back(ev);

        }
       
    }

   long long int sum=0;
    set<long long int>st;
    st.insert(0);

int i=0;
int j=0;int k=0;
        while(i<n){

            if((i&1)==0){
                sum+=presum2[j];
                j++;
            }

            else{
                sum-=presum1[k];
                k++;
            }

            if(st.find(sum)!=st.end()){
                cout<<"yes"<<endl;
                return;
            }

            st.insert(sum);


            i++;



        }

        cout<<"no"<<endl;
                return;

        
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