class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();

        //Using BINARY SEARCH

        int left = matrix[0][0], right = matrix[row - 1][col - 1];

        while(left <= right)
        {
            int mid = left + (right - left)/2;

            int cnt = 0;
            for(int i = 0; i < col; i++)
            {
                cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin(); 
            }

            if(cnt < k) left = mid + 1;
            else right =  mid - 1;
        }
        return left;
    }
};
