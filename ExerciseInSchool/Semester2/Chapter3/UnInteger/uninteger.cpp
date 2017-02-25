#include <iostream>

using namespace std;

unsigned int sumDigit(unsigned int n)
{
    int d, s = 0;
    for (int i = 0; i <= n; i++)
    {
        if (n != 0)
        {
            d = n % 10;
            n = n / 10;
            s = s + d;
        }
    }
    return s;
}

unsigned int reversed(unsigned int n)
{
    float d, r = 0;
    for (int i = 0; i <= n; i++)
    {
        if (n != 0)
        {
            d = n % 10;
            n = n / 10;
            r = (r + d/10)*10;
        }
    }
    return r;
}

bool isPerfect (int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            s += i;
        }
    }
    if (s == n)
        return true;
    return false;
}

bool isPrime (unsigned int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            s += 1;
        }
    }
    if (s == 2)
    {
        return true;
    }
    return false;
}

void factor (int n)
{
    cout << "Ket qua phan tich " << n << " thanh thua so nguyen to:  " << n << " = ";
    int i = 2;
    while (i <= n)
    {
        if (n%i == 0)
        {
            n = n / i;
            cout << i;
            if (n != 1)
            {
                cout << "*";
            }
        }

        else
            i++;
    }
}

int main()
{
    int n;

    cin >> n;
    cout << "Tong cac chu so cua so n: " << sumDigit(n) << endl;
    cout << "So co cac chu so nguoc voi n: " << reversed(n) << endl;
    cout << n << " la so hoan hao: " << isPerfect(n) << endl;
    cout << n << " la so nguyen to: " << isPrime(n) << endl;
    factor (n);
    return 0;
}
