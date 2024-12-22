//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(vector<int>& arr) {
        // code here
        if(arr.size() == 1)
        {
            return 1;
        }
        int dp[arr.size()];
         std::fill(dp, dp + arr.size(), 1);
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
            for(int j = 0 ; j < i ; ++j)
            {
                if(arr[j] < arr[i] && dp[i] <= dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        return *std::max_element(dp, dp + arr.size());
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.longestSubsequence(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends