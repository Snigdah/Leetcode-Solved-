//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<vector<int>>ans;
        set<vector<int>> set;
       


        for(int i  =0; i<n-3; i++){
            for(int j  = i+1; j<n-2; j++){
                int left = j+1;
                int right = n-1;

                long long int t = (long long)target - (long long)nums[i] - (long long)nums[j];

                while(left < right){
                    if(nums[left] + nums[right] < t){
                        left++;
                    }
                    else if(nums[left] + nums[right] > t){
                        right--;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }

        for(auto i :set){
            ans.push_back(i);
        }


        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends