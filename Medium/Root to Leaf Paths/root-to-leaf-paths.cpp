class Solution {
  public:
    void helper(vector<vector<int>>&ans1 , vector<int>&ans , Node *root){
        
        if(!root){
            return;
        }
        ans.push_back(root->data);
        if(!(root->left) && !(root->right)){
            ans1.push_back(ans);
            ans.pop_back();
            return;
        }
        
        helper(ans1,ans,root->left);
        helper(ans1,ans,root->right);
        ans.pop_back();
        
        
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
         vector<vector<int>>ans;
         vector<int>help;
         helper(ans,help,root);
         return (ans);
    }
};

