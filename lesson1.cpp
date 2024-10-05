// thuanpd
// Phạm Duy Thuận
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool checkInputTriangle(double a, double b, double c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// tam giac
void handleCaculateTriangular()
{
    double a, b, c, chuVi, dienTich, p;

    cout << "Nhập vào cạnh a: ";
    cin >> a;
    cout << "Nhập vào cạnh b: ";
    cin >> b;
    cout << "Nhập vào cạnh c: ";
    cin >> c;

    if (checkInputTriangle(a, b, c))
    {
        chuVi = a + b + c;
        p = chuVi / 2;
        dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Chu vi tam giác: " << chuVi << endl;
        cout << "Diện tích tam giác: " << dienTich << endl;
    }
    else
    {
        cout << "Dữ liệu của bạn nhập vào không tạo thành tam giác." << endl;
    }
}

// Hình chữ nhật
void handleCaculateRectangle()
{
    double chieuDai, chieuRong, chuVi, dienTich;

    cout << "Nhập vào chiều dài: ";
    cin >> chieuDai;
    cout << "Nhập vào chiều rộng: ";
    cin >> chieuRong;

    if (chieuDai > 0 && chieuRong > 0)
    {
        chieuRong = 2 * (chieuDai + chieuRong);
        dienTich = chieuDai * chieuRong;
        cout << "Chu vi hình chữ nhật: " << chuVi << endl;
        cout << "Diện tích hình chữ nhật: " << dienTich << endl;
    }
    else
    {
        cout << "Dữ liệu không hợp lệ. Chiều dài và chiều rộng phải lớn hơn 0." << endl;
    }
}

// Hình vuông
void handleCaculateSquare()
{
    double canh, chuVi, dienTich;

    cout << "Nhập độ dài cạnh: ";
    cin >> canh;

    if (canh > 0)
    {
        chuVi = 4 * canh;
        dienTich = canh * canh;
        cout << "Chu vi hình vuông: " << chuVi << endl;
        cout << "Diện tích hình vuông: " << dienTich << endl;
    }
    else
    {
        cout << "Dữ liệu không hợp lệ. Cạnh phải lớn hơn 0." << endl;
    }
}

int main()
{
    string valueInput;

    cout << "Nhập tên hình (tam giac, hinh chu nhat, hinh vuong): ";
    getline(cin, valueInput);

    if (valueInput == "tam giac")
    {
        handleCaculateTriangular();
    }
    else if (valueInput == "hinh chu nhat")
    {
        handleCaculateRectangle();
    }
    else if (valueInput == "hinh vuong")
    {
        handleCaculateSquare();
    }
    else
    {
        cout << "Tên hình không hợp lệ." << endl;
    }

    return 0;
}
