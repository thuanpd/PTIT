// thuanpd
// Phạm Duy Thuận
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, n;

    cout << "Nhập vào số hàng m: ";
    cin >> m;
    cout << "Nhập vào số cột n: ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    cout << "Nhập vào các phần tử của mảng:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Mảng vừa nhập:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                arr[i][j] = 0;
            }
        }
    }

    cout << "Mảng sau khi chuyển đổi:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    vector<int> flatArr;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            flatArr.push_back(arr[i][j]);
        }
    }

    sort(flatArr.begin(), flatArr.end(), greater<int>());

    int X;
    cout << "Nhập vào số X để chèn vào mảng: ";
    cin >> X;

    flatArr.push_back(X);
    sort(flatArr.begin(), flatArr.end(), greater<int>());

    cout << "Mảng vào sau khi sắp xếp và chèn X:\n";
    for (size_t i = 0; i < flatArr.size(); i++)
    {
        cout << flatArr[i] << "\t";
    }
    cout << endl;

    return 0;
}
