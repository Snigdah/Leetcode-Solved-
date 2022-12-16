//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size()){
            return 1;
        }
        if(str1.size() < 2 || str2.size() < 2){
            return 0;
        }
        
        string temp1="";
        temp1.append(str1, 2, str1.size());
        temp1.append(str1, 0,2);
        
        
        string temp2 = "";
        temp2.append(str1, str1.size()-2, str1.size());
        temp2.append(str1, 0 , str1.size()-2);
        //cout<<temp2<<endl;
        //cout<<temp1<<endl;
        
        if(temp1==str2 || temp2 == str2){
            return 1;
        }
        else{
            return 0;
        }
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends