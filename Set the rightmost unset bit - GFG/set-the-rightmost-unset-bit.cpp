//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int N)
    {
        // Write Your Code here
        int mask=1;
        int flag=0;
        int i=0;
        int x=N;
        while(N!=0){
            if((N & mask)==0)
            {
                flag=1;
                break;
            }
            
            i++;
            N=N>>1;
        }
        if(flag==1)
        mask=mask<<i;
        x=x | mask;
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends