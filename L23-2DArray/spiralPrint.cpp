class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;

        // index
        int startRow = 0;
        int endCol = col - 1;
        int endRow = row - 1;
        int startCol = 0;
        while (count < total)
        {
            // printing starting row
            for (int idx = startCol; count < total && idx <= endCol; idx++)
            {
                ans.push_back(matrix[startRow][idx]);
                count++;
            }
            startRow++;
            // printing ending col
            for (int idx = startRow; count < total && idx <= endRow; idx++)
            {
                ans.push_back(matrix[idx][endCol]);
                count++;
            }
            endCol--;
            // printing ending row
            for (int idx = endCol; count < total && idx >= startCol; idx--)
            {
                ans.push_back(matrix[endRow][idx]);
                count++;
            }
            endRow--;
            // printing starting col
            for (int idx = endRow; count < total && idx >= startRow; idx--)
            {
                ans.push_back(matrix[idx][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};