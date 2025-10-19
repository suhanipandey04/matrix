#include <iostream>
#include <vector>
using namespace std;

vector<int> rowWithMaxOnes(const vector<vector<int>>& mat) {
    int maxCount = 0;
    int rowIndex = -1;

    for (int i = 0; i < mat.size(); i++) {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) count++;
        }

        if (count > maxCount) {
            maxCount = count;
            rowIndex = i;
        }
    }

    return {rowIndex, maxCount};
}

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    cout << "Enter binary matrix elements row-wise:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> result = rowWithMaxOnes(mat);
    cout << "Row with max ones: " << result[0] << ", Count of ones: " << result[1] << endl;

    return 0;
}