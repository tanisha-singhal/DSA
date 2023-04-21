//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int nums[], int n){
        //complete the function here
        if(n==1)
        return nums[0];
        int low=0,high=n-1;
        if(nums[low]<nums[high])
        return nums[low];
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1])
            return nums[mid+1];
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[high]){
                high=mid;
            }
            else{
                low=mid;
            }
        }
       return nums[low];
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends