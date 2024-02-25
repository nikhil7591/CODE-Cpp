#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int rectanguleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;

    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int rectanguleSumM2(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    // int sum = 0;
    // // prefix sum row-wise
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 1; j < matrix[0].size(); j++)
    //     {
    //         matrix[i][j] += matrix[i][j - 1];
    //     }
    // }

    // // printing prefix sum array row-wise
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[i].size(); j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = l1; i <= l2; i++)
    // {
    //     if (r1 != 0)
    //     {
    //         sum += matrix[i][r2] - matrix[i][r1 - 1];
    //     }
    //     else
    //     {
    //         // matrix[i][r1-1]=0
    //         sum += matrix[i][r2];
    //     }
    // }
    // return sum;
}

int rectanguleSumM3(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    // prefix sum col-wise
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    // printing prefix sum array row-wise
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int top_sum, left_sum, topleft_sum = 0;
    if (l1 != 0)
        top_sum = matrix[l1 - 1][r2];
    if (r1 != 0)
        left_sum = matrix[l2][r1 - 1];
    if (l1 != 0 && r1 != 0)
        topleft_sum = matrix[l1 - 1][r1 - 1];

    sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum;
    return sum;
}

int main()
{

    // Que: Given a matrix "a" of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).Return the sum of the rectangule from (l1,r1) and (l2,r2).
    int n, m;
    cin >> n, cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "Enter coordinates in this form (l1,r1 and l2,r2)" << endl;
    cin >> l1, cin >> r1, cin >> l2, cin >> r2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int sum = rectanguleSum(matrix, l1, r1, l2, r2);
    // cout<<"the sum: "<<sum<<endl;

    // method 2
    // using prefix sum
    int sum2 = rectanguleSumM2(matrix, l1, r1, l2, r2);
    // cout << "the sum: " << sum2 << endl;

    // method 3
    int sum3 = rectanguleSumM3(matrix, l1, r1, l2, r2);
    cout << sum3 << endl;
    return 0;
}