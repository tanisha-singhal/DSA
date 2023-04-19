//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   vector<string> ans;
   void generate(string &s,int n){
       if(n==1){
           ans.push_back(s);
           return;
       }
       if(s.back()=='0'){
           s=s+'0';
           generate(s,n-1);
           s.pop_back();
           s=s+'1';
           generate(s,n-1);
           s.pop_back();
       }else{
           s+='0';
           generate(s,n-1);
           s.pop_back();
       }
   }
    void generateBinaryStrings(int num){
        //Write your code
        string str;
        str='0';
        generate(str,num);
        str='1';
        generate(str,num);
        //sort(ans.begin(),ans.end());
        for(auto it:ans){
            cout<<it<<" ";
        }
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends