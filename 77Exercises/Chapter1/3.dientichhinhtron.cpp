/*
• Viết chương trình nhập vào bán kính của hình tròn; xuất ra diện tích và chu vi của
hình tròn đó.
• Diện tích của hình tròn biết trước bằng cách nhập vào từ bàn phím, tính và in ra bán
kính của hình tròn đó.
*/
#include <iostream>
#define PI 3.1413
using namespace std;

int main()
{
    float r,c,s;
    cout << "Ban kinh hinh tron: ";
    cin >> r;

    //
    s = r*r*PI;
    cout << "Dien tich: " << s << endl;

    //
    c = r*2*PI;
    cout << "Chu vi: " << c;

    return 0;
}
