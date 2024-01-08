#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;
    vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];

    bool flag = 1;
 
    for (int i = 0; i < n; i++) {
        while (a[i] % 10 != 0 && a[i] % 10 != 2)
            a[i] += a[i] % 10;
    }
 
    for (int i = 0; i < n; i++) {
 
        if ((a[0] % 10 == 0) && (a[i] != a[0])) {
            flag = 0;
            break;
        }
 
        if ((a[i] - a[0]) % 20) {
            flag = 0;
            break;
        }
    }
 
    if (flag)
       cout<<"Ada
    else
        return "Impossible";
}
    

    }

int main() {
   int t;
   cin>>t;
   while(t--){
    solve();
   }


    return 0;
}