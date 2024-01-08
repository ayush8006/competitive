#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n,k;

    cin>>n>>k;


    if(k%n!=0){
        cout <<"No"<<endl;
        return ;
    }



    else{

        k=k/n;
     vector<vector<int>> matrix(n, vector<int>(n, 0));

    // Fill the matrix with 1s in a diagonal pattern
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < i + k; ++j) {
            matrix[i][j % n] = 1;
        }
    }
        cout<<"Yes"<<endl;

         for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

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