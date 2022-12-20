//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
     set<int>st;
        int ans = 0;

        int start = 0;
        int end = 0;

        while(start<s.size()){
            auto it = st.find(s[start]);
            if(it==st.end()){
                if(start-end+1>ans){
                    ans = start-end+1;  
                }
                st.insert(s[start]);
                start++;
            }
            else{
                st.erase(s[end]);
                end++;
            }
        }

        return ans;
}