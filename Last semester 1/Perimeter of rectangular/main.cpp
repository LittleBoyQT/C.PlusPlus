#include <iostream>
#include <math.h>
using namespace std;

int calculatePerimeter(double s1, double s2, double s3)
{
    double length,width,height;
    width = sqrt(s3/s2);
    length = s1/width;
    height = width*s2;

    return ((length + width)*2 + (length + height)*2 + (width + height)*2);
}

int main()
{
    int s1,s2,s3;
    do
    {
        cout << "Input area of first face: ";
        cin >> s1;

        cout << "Input area of seccond face: ";
        cin >> s2;

        cout << "Input area of third face: ";
        cin >> s3;
        cout << endl << endl;
    }
    while (s1 == 0 || s2 ==0 || s3 ==0);

    cout << "Total perimeter 3 surface of rectangular are " << calculatePerimeter(s1,s2,s3) << endl;
    cout << "___________________ Complete ___________________" << endl;

    return 0;
}
