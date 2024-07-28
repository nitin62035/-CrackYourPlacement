//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        int count=0;
        vector<long long int>p(n);
        long long int s=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
            s=s*nums[i];
            }
            else
            count++;
        }
        
        for(int j=0;j<n;j++)
        {
            if(nums[j] != 0 && count<=0)
            p[j]=s/nums[j];
            
            else if(nums[j] != 0 && count>0)
            p[j]=0;
            
            else if(nums[j] ==0 && count==1)
            p[j]=s;
            
            else if(nums[j] ==0 && count>1)
            p[j]=0;
            
        }
        return p;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends