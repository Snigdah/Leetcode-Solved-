//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string ans = "";
        int i = 0;
        int n = s.size();
        
        while(i<n){
            while(i<n && s[i]=='.'){
                i++;
            }
            if(i>=n){
                break;
            }
            int j = i+1;
            while(j<n && s[j]!='.'){
                j++;
            }
            string d = s.substr(i, j-i);
             if(ans.length()==0){
            ans = d;
           }
           else{
               ans = d + "."+ ans;
           }
           
            i = j;
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends