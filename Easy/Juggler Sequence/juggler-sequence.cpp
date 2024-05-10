//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void helper(vector<int>&ans , int n){
        if(n == 1){
            return;
        }
        if(n % 2 == 0){
            int x = floor(pow(n,0.5));
            ans.push_back(x);
            helper(ans,x);
        }
        else{
            int x = floor(pow(n,1.5));
            ans.push_back(x);
            helper(ans,x);
        }
    }
    vector<int> jugglerSequence(int n) {
            
            vector<int>ans;
            ans.push_back(n);
            helper(ans,n);
            return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends