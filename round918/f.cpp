#include<bits/stdc++.h>
using namespace std;

void solve(){

    }

int main() {
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];

   }
int q;
cin>>q;

vector<pair<int,int>>b(q);

for(int i=0;i<q;i++){

    cin>>b[i].first>>b[i].second;


}

vector<int>marks(n,0);

marks[0]=a[0];

for(int i=1;i<n;i++){

    marks[i]=marks[i-1]+a[i];

}

vector<int>ans(q,0);

for(int i=0;i<q;i++){
    int l=b[i].first;
    int r=b[i].second;

    if(l==0)ans[i]=marks[r];
    else
    ans[i]=marks[r]-marks[l-1];


}


    return 0;
}