/*
    -- Phan tich mot so n thanh thua so nguyen to.
    -- Find the prime factors of a number.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    int i = 2;
    while (i <= n)
    {

        if (n % i == 0)
        {
            cout << i;
            n = n / i;

            if (n != 1)
            {
                cout << "*";
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}
