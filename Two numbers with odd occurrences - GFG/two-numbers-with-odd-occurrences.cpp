//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int> ans;
        int XOR=0;
        for(int i=0;i<N;i++){
            XOR=XOR^Arr[i];
        }
        int cnt=0;
        while(XOR){
            if(XOR&1)
            break;
            cnt++;
            XOR=XOR>>1;
        }
       long long int ans1=0,ans2=0;
        for(int i=0;i<N;i++){
            if(Arr[i] & (1<<cnt))
            ans1=ans1^Arr[i];
            else
            ans2=ans2^Arr[i];
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends