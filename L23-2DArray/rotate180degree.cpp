class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int startRow = 0;
        int endCol = col - 1;
        int endRow = row - 1;
        int startCol = 0;
        while (startCol <= endCol)
        {
            for (int index = startRow; index <= endRow && startCol <= endCol; index++)
            {
                swap(matrix[index][startCol], matrix[index][endCol]);
            }
            startCol++, endCol--;
        }
    }
};