//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    bool fun (vector<int> &arr, int k , int mid){
        
        int students = 1;
        
        int PagesSum = 0;
        
        for(int i = 0 ; i < arr.size() ; ++i){
            
            if(PagesSum + arr[i] <= mid){
                
                PagesSum += arr[i];
            }
            else
            { 
            
                students ++;
           
                if(students > k || arr[i] > mid){
                    return false;
                }
                
                
                PagesSum = arr[i];
            }
        }
        
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int sum = 0;
        
        // cout << k << " " << arr.size() << endl;
        if(arr.size() < k){
            return -1;
        }
        
        
        for(int i = 0 ; i < arr.size() ; ++i) sum += arr[i];
        
        if( k == 1 ){ return sum; }
        
        int l = 0 , h = 1e19;
        int ans = -1;
        while( l  <= h ){
            
            int mid = ( l + h )/2;
            
            if(fun(arr,k,mid)){
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends