//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int>ans;
        for(int i=0;i<n+2;i++){

          //cout<<"iygu"<<endl;
            
            if(arr[i]!=i+1 and arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
                //i--;
            }
            
            // else if(arr[i]!=i+1 and arr[i]==arr[arr[i]-1]){
            //     ans.push_back(arr[i]);
            // }
        }
        for(int i=0;i<n+2;i++)
        {
          cout<<arr[i]<<endl;
        }
        
        ans.push_back(arr[n]);
        
        ans.push_back(arr[n+1]);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends