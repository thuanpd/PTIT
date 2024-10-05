// thuanpd
// Phạm Duy Thuận
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Nhập vào độ dài cạnh a: ";
    cin >> a;
    cout << "Nhập vào độ dài cạnh b: ";
    cin >> b;
    cout << "Nhập vào độ dài cạnh c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Ba cạnh a, b, c lập thành một tam giác." << endl;

        if (a == b && b == c)
        {
            cout << "Đây là tam giác đều." << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Đây là tam giác cân." << endl;
        }
        else
        {
            cout << "Đây là tam giác thường." << endl;
        }

        int chuVi = a + b + c;
        cout << "Chu vi tam giác: " << chuVi << endl;

        double p = chuVi / 2.0;
        double dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Diện tích tam giác: " << dienTich << endl;
    }
    else
    {
        cout << "Ba cạnh a, b, c không lập thành một tam giác." << endl;
    }

    return 0;
}
