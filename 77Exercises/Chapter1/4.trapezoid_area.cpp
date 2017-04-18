/*
Viết chương trình nhập vào đáy lớn, đáy nhỏ, chiều cao của hình thang; xuất ra diện tích
của hình thang đó
*/
#include <iostream>

using namespace std;

int main()
{
    int dl, db, h;
    float s;

    cout << "Day lon: ";
    cin >> dl;
    cout << "Day be: ";
    cin >> db;
    cout << "Chieu cao: ";
    cin >> h;

    s = static_cast<float>(((dl + db)*h))/2;

    cout << "Dien tich hinh thang: " << s << endl;
    return 0;
}
