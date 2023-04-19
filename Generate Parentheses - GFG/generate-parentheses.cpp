//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int open=n,closed=n;
        string s;
        genPar(ans,s,open,closed);
        return ans;
    }
    void genPar(vector<string> &ans,string &s,int o,int c){
        if(o==0 && c==0){
            ans.push_back(s);
            return;
        }
        if(o==c){
            s=s+'(';
            genPar(ans,s,o-1,c);
            s.pop_back();
        }
        else if(o==0){
            s=s+')';
            genPar(ans,s,o,c-1);
            s.pop_back();
        }
        else if(c==0){
            s=s+'(';
            genPar(ans,s,o-1,c);
            s.pop_back();
        }
        else{
            s=s+'(';
            genPar(ans,s,o-1,c);
            s.pop_back();
            s=s+')';
            genPar(ans,s,o,c-1);
            s.pop_back();
        }
        
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends