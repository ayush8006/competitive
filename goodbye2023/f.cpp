#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int a,b,c;
    
    cin>>a>>b>>c;
   
    for(int i=0;i<31;i++){

        cout<<a<<b<<c<<endl;
        
        if(a==b and a==c){
            cout<<"yes"<<endl;
            return;
            
        }
        
        int count=0;
        
        if(a&(1<<i))count++;
         if(b&(1<<i))count++;
          if(c&(1<<i))count++;

          cout<<count<<endl;

          
        if(count%3==0)break;
        
        if(count==1){
            
            if(a&(1<<i))a+=(1<<i);
            
         if(b&(1<<i))b+=(1<<i);
         
         
          if(c&(1<<i))c+=(1<<i);
          
            
        }
        if(count==2){
            cout<<b<<endl;
            
             if(a&(1<<i)==0) a += (1<<i);
            
         if((b&(1<<i))==0) b += (1<<i);
         
         
          if(c&(1<<i)==0) c += (1<<i);
            
        }
        
        
    }
    
    if(a==b and a==c){
        
         cout<<"yes"<<endl;
            return;
    }
    
    else{
        cout<<"no"<<endl;
    }
        
       
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	
	return 0;
	

}
