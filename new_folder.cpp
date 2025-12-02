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

}

