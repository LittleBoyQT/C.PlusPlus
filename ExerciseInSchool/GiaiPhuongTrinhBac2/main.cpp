#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c, delta;
    do
    {
        cout << "Input a = ";
        cin >> a;
    }while ( a <= 0);

    cout << "Input b = ";
    cin >> b;

    cout << "Input c = ";
    cin >> c;

    delta = b*b - 4*a*c;

    if (delta < 0)
    {
        cout << endl << "PT vo nghiem" << endl;
    }
    else if (delta == 0)
    {
        cout << endl << "PT co nghiem kep x = " << -b/a <<  endl;
    }
    else
    {
        float x1,x2;

        x1 = -b + sqrt(delta)/(2*a);
        x2 = -b - sqrt(delta)/(2*a);
        cout << endl << "PT co hai nghiem phan biet: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }


    return 0;
}
