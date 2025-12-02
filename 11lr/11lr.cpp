#include <iostream>

using namespace std;

int main()
{
    const int n = 3;
    const int m = 3;

    int matrix[n][m] = {
        {3, 4, 5},
        {4, 5, 6},
        {3, 2, 6}
    };

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < m; j++) {
        int minRow = 0, maxRow = 0;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] < matrix[minRow][j]) minRow = i;
            if (matrix[i][j] > matrix[maxRow][j]) maxRow = i;
        }

        int temp = matrix[minRow][j];
        matrix[minRow][j] = matrix[maxRow][j];
        matrix[maxRow][j] = temp;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

