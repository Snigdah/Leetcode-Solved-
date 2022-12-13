//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_map<char, int> m;
    
    for(int i =0; i<s.size(); i++){
        m[s[i]]+=1;
        if(m[s[i]]>1){
            string p = "";
            p = p + s[i];
            return p;
        }
    }
    
    return "-1";
    
}