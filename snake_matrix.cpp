//print matrix in snake pattern
#include <iostream>
#include <vector>
using namespace std;

vector<int> snake(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> answer;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                answer.push_back(matrix[i][j]);
            }
        } else {
            for (int j = cols - 1; j >= 0; j--) {
                answer.push_back(matrix[i][j]);
            }
        }
    }
    return answer;
}

int main() {
    // Sample 3x3 matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = snake(matrix);

    cout << "Snake Pattern: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}