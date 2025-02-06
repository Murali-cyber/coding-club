#include <iostream>
#include <vector>

using namespace std;

void modifyMatrix(vector<vector<int>>& matrix, int R, int C) {
    /*
         Enter code here
         */
        return 0;
}

int main() {
    // Define the matrix inbuilt
    vector<vector<int>> matrix = {
        {49, 16, 50, 47, 28, 50},
        {43, 44, 12, 32, 37, 12},
        {33, 26, 37, 48, 25, 37},
        {31, 48, 41, 19, 16, 16}
    };

    int R = matrix.size();
    int C = matrix[0].size();

    // Modify the matrix
    modifyMatrix(matrix, R, C);

    return 0;
}
