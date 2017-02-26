#include <iostream>
#include <cstdlib> // thu vien cho ham RAND
#include <time.h> // Thu vien cho ham TIME
using namespace std;

int main()
{
    srand(time(0)); // So random thay doi theo thoi gian.
    int n,x;
    n = rand() % (100 + 1); // Gioi han n tu 0 den 100
    do
    {
        do
        {
            cout << "Toi doan so: ";
            cin >> x;
        }
        while (x<1 || x>100);

        cout << "Ban doan n la:  " << x << ". ";

        if (x > n)
        {
            cout << "Nhung ... n < " << x << endl << endl;
        }
        else if (x < n)
        {
            cout << "Nhung ... n > " << x << endl << endl;
        }
        else
        {
            cout << "***CHINH XAC***" << endl << endl;
        }
    }
    while (x != n); // Lap cho toi khi x = n
    return 0;

}
