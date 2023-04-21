#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isMinimumInRow(vector<vector<int>> &matrix, int i, int j)
    {
        for (int x = 0; x < matrix[0].size(); x++)
        {
            if (x == j)
                continue;
            if (matrix[i][x] < matrix[i][j])
            {
                return false;
            }
        }
        return true;
    }

    bool isMaxmumInCol(vector<vector<int>> &matrix, int i, int j)
    {
        for (int x = 0; x < matrix.size(); x++)
        {
            if (x == i)
                continue;
            if (matrix[x][j] > matrix[i][j])
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (isMinimumInRow(matrix, i, j) && isMaxmumInCol(matrix, i, j))
                {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
