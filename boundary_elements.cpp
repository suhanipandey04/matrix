//print boundary elements of a matrix

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> BoundaryElements(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> answer;

        // Top row
        for (int i = 0; i < n; i++)
            answer.push_back(matrix[0][i]);

        // Right column (excluding top)
        for (int i = 1; i < n; i++)
            answer.push_back(matrix[i][n - 1]);

        // Bottom row (excluding right corner)
        for (int i = n - 2; i >= 0; i--)
            answer.push_back(matrix[n - 1][i]);

        // Left column (excluding bottom and top corners)
        for (int i = n - 2; i >= 1; i--)
            answer.push_back(matrix[i][0]);

        return answer;
    }
};

int main() {
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    Solution sol;
    vector<int> result = sol.BoundaryElements(matrix);

    cout << "Boundary elements: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}