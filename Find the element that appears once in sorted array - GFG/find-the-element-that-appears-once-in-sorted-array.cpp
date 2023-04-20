//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    bool check(int nums[],int x){
       if(nums[x]!=nums[x-1] && nums[x]!=nums[x+1]){
           return true;
       }
       return false;
   }
   bool check2(int nums[],int x){
       if((nums[x]==nums[x-1] && x%2!=0) || (nums[x]==nums[x+1] && x%2==0)){
           return true;
       }
       return false;
   }
    int findOnce(int nums[], int n)
    {
        //code here.
        if(n==1 || nums[0]!=nums[1])
        return nums[0];
        else if(nums[n-1]!=nums[n-2])
        return nums[n-1];
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(nums,mid)){
                return nums[mid];
            }
            else if(check2(nums,mid)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return nums[low];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends