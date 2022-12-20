//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string p)
{
      int ans = -1;


       for(int i =0 ; i<s.size(); i++){

           int j;
           for( j = 0; j<p.size(); j++){
               if(s[i+j]!=p[j]){
                   break;
               }
           }

        if(j==p.size()){
           return i;
        }
       }

       return ans; 
}