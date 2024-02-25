#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> createSpiralMatrix(int n)
{

    vector<vector<int>> matrix(n, vector<int>(n));

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1;

    while (left <= right && top <= bottom)
    {

        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                matrix[top][col] = value++;
                // value++;
            }
            top++;
        }

        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                matrix[row][right] = value++;
                // value++;
            }
            right--;
        }

        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                matrix[bottom][col] = value++;
                // value++;
            }
            bottom--;
        }

        else
        {
            for (int row = bottom; row >= top; row--)
            {
                matrix[row][left] = value++;
                // value++;
            }
            left++;
        }

        direction = (direction + 1) % 4;
    }

    return matrix;
}

int main()
{

    // Que: Given a positive  generate an n*n martix filled with elements from 1 to n2 in sipral order.
    int n;
    cin >> n;

    vector<vector<int>> martix(n, vector<int>(n));

    martix = createSpiralMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << martix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}