#include <iostream>
#include <vector>

using namespace std;

void generateSpiralMatrix(int N) {
    vector<vector<int>> matrix(N, vector<int>(N));
    int num = 1;
    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    while (top <= bottom && left <= right) {
        // Fill top row from left to right
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        top++;

        // Fill right column from top to bottom
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        right--;

        // Fill bottom row from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // Fill left column from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    // Print the matrix
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    // cout << "Enter the size of the matrix (N): ";
    cin >> N;
    generateSpiralMatrix(N);
    return 0;
}
