#include <iostream>
#include <cmath>
using namespace std;

void computeTriagle (double a, double b, double c, double& area, double& perimeter)
{
    double s, half_area;
    area = (a + b + c);
    half_area = area / 2;
    perimeter = sqrt(half_area*(half_area-a)*half_area*(half_area-b)*half_area*(half_area-c));
    cout << "_____________________" << endl;
    cout << "Chu vi tam giac = " << area << endl;
    cout << "Dien tich tam giac = " << perimeter << endl;
}

int main()
{
    double a, b, c, area, perimeter;
    do
    {
        cout << "Nhap do dai canh a: "; cin >> a;
        cout << "Nhap do dai canh b: "; cin >> b;
        cout << "Nhap do dai canh c: "; cin >> c;
        if (a+b < c || a+c < b || b+c < a)
        {
            cout << "Ba canh nay khong the tao thanh mot tam giac! Nhap lai ..." << endl << endl;
        }

    }while (a+b < c || a+c < b || b+c < a);

    computeTriagle(a, b, c, area, perimeter);
    return 0;
}
