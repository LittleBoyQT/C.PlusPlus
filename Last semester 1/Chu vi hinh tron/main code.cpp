#include <iostream>
using namespace std;
#define PI 3.1416

int main ()
{
    float r;
    float T;

    cin >> r;

    T = 2*PI*r;

    // Gioi han chu so sau dau cham;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << T;
}
