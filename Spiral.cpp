#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int val = 1;
        int left = 0, right = n - 1;
        int top = 0, bottom = n - 1;

        while (left <= right && top <= bottom) {
            // Top row
            for (int i = left; i <= right; i++) {
                mat[top][i] = val++;
            }
            top++;

            // Right column
            for (int i = top; i <= bottom; i++) {
                mat[i][right] = val++;
            }
            right--;

            // Bottom row (check boundaries)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    mat[bottom][i] = val++;
                }
                bottom--;
            }

            // Left column (check boundaries)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    mat[i][left] = val++;
                }
                left++;
            }
        }
        return mat;
    }
};
 
  int main() {
    Solution sol;
    int n = 4; 
    vector<vector<int>> result = sol.generateMatrix(n);

    for (auto &row : result) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
