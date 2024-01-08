#include<bits/stdc++.h>
using namespace std;


int N =1e6+1;
vector<bool>prime(N,true);
vector<int>primes;
void find_prime(){

   prime[0] = false;
    prime[1] = false;

   for (int i = 2; i * i < N; i++) {
        if (prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
}

void process(int a,map<int,int>&mp){

    while(a>1){

        for(auto x:primes){

            if(x*x>a)break;
            while(a%x==0){
                mp[x]++;
                a=a/x;
            }

            
        }
        if(a>1)mp[a]++;
        break;

    }


}
void solve(){

    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    

   map<int,int>mp;

    for(int i=0;i<n;i++){
        process(v[i],mp);
    }

    for(auto x:mp){
        if(x.second%n!=0){
            cout<<"no"<<endl;
            return;
        }
    }

    cout<<"yes"<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    find_prime();

     int t;
    cin >> t;
    while (t--) {
        solve();
        //cout<<endl;
    }

    return 0;
}