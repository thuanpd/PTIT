// thuanpd
// Phạm Duy Thuận
#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhập một số nguyên n (0 < n ≤ 100): ";
        cin >> n;
        if (n <= 0 || n > 100)
        {
            cout << "Nhập số nguyên không hợp lệ. Vui lòng nhập lại\n";
        }
    } while (n <= 0 || n > 100);

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    cout << "Số ước của " << n << " là: " << count << endl;

    return 0;
}
