#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "Input a = ";
    cin >> a;
    cout << "Input b = ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "After changering possition..." << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
