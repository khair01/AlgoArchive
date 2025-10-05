class Solution {
public:
    void helper(vector<vector<char>>& grid, int i , int j , int r , int c ){
       
        if(i < 0 || j < 0 || i >= r || j >= c || grid[i][j] != '1')
            return;

        grid[i][j] = 'X';

        helper(grid, i + 1, j, r, c);
        helper(grid, i - 1, j, r, c);
        helper(grid, i, j + 1, r, c);
        helper(grid, i, j - 1, r, c);
    }

    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int count = 0;

        for(int i = 0 ; i < r ; ++i){
            for(int j = 0 ; j < c ; ++j){
                if(grid[i][j] == '1'){
                    count++;
                    helper(grid, i, j, r, c);
                }
            }
        }
        return count;
    }
};
