// thuanpd
// Phạm Duy Thuận
#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    double a, b, c;

    cout << "Nhập vào  hệ số  a: ";
    cin >> a;
    cout << "Nhập vào hệ số b: ";
    cin >> b;
    cout << "Nhập vào hệ số c: ";
    cin >> c;
    
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phương trình có vô số nghiệm." << endl;
            }
            else
            {
                cout << "Phương trình vô nghiệm." << endl;
            }
        }
        else
        {
            double nghiem = -c / b;
            cout << "Phương trình có nghiệm duy nhất: x = " << nghiem << endl;
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phương trình có 2 nghiệm phân biệt: " << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (delta == 0)
        {
            double x = -b / (2 * a);
            cout << "Phương trình có nghiệm kép: x = " << x << endl;
        }
        else
        {
            cout << "Phương trình vô nghiệm." << endl;
        }
    }

    return 0;
}
