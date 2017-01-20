/*
    Viết chương trình nhập vào độ dài hai cạnh của tam giác và góc giữa hai cạnh đó,
    sau đó tính và in ra màn hình diện tích của tam giác.
*/
#include <iostream>
#include <math.h>
#define PI 3.1416
using namespace std;

int main()
{
    float a,b,angle,s;

    // declaring variables
    cin >> a;
    cin >> b;
    cin >> angle;

    // calculating formula
    s = (a*b*sin(angle*PI/180))/2;

    // decimal point
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // output result
    cout << s;

    return 0;
}
