//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int>s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      int longestStreak=0;
      for(int j=0;j<N;j++){
          if(!s.count(arr[j]-1)){
              int curEle=arr[j];
              int curStreak=1;
              while(s.count(curEle+1)){
                  curEle+=1;
                  curStreak++;
              }
              longestStreak=max(longestStreak,curStreak);
          }
      }
      return longestStreak;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends