//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
 
	    // Code here
	    // e
	    vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++)
        {
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        int ct=0;
        for(int i=0;i<v.size();)
        {
            if(v[i].second==i)
            {
                i++;
                continue;
            }
            else  
            {
                ct++;
                swap(v[i],v[v[i].second]);
            }
        }
        return ct;
	}

};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minSwaps(arr) << endl;
    }
}

// } Driver Code Ends