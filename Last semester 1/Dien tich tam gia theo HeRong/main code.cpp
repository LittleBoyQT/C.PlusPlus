#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a, b, c;
    float p, s;

    cin >> a >> b >> c;

    // Cong thuc tinh chu vi;
    p =(a + b + c) / 2;

    // Cong thuc tinh dien tich
    s = sqrt(p * (p - a)*(p - b)*(p - c));

    // Gioi han chu so sau dau cham cua so thap phan;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << s;
}
