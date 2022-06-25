class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans(numRows);

        for (int i = 0; i < numRows; i++)
        {
            ans[i] = vector<int>(i + 1, 1); // 第 i 列有 i + 1 個元素，每個元素皆為 1

            for (int j = 1; j < i; j++) ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j]; //中間的元素是 i - 1 列的兩元素相加
        }

        return ans;
    }
};