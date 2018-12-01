class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int maxArea = 0;
        
        if (matrix.size() == 0)
        {
            return 0;
        }
        
        vector<vector<int>> res(2, vector<int>(matrix[0].size()+1, 0));
        
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == '1')
                {
                    res[(i+1)%2][j+1] = min (res[i%2][j], min(res[(i+1)%2][j], res[i%2][j+1])) + 1;
                }
                else
                {
                    res[(i+1)%2][j+1] = 0;
                }
                
                maxArea = max (maxArea, res[(i+1)%2][j+1]);
            }
        }
        
        return maxArea * maxArea;
    }
};
