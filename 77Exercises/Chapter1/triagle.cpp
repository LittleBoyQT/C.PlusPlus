// Viết chương trình xuất ra màn hình hình vuông đặc kí tự ‘*’ có cạnh bằng a (với a nhập từ
// bàn phím)
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Input a: " << endl;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
