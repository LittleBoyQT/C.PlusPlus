#include <iostream>
using namespace std;

int main()
{

    char a[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n,g;
    char k;

    cout << "Input a letter: ";
    cin >> k;

    cout << "How many steps you want to come a letter: ";
    cin >> n;

// Dem so ky tu trong mang a.
    int c = 0;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        c++;
    }

// Do tim ky tu trong mang
    for (int i = 0; i < c; i++)
    {
        if (k==a[i])
        {
            g = i;
        }
    }

// Thuat toan
    int r = (g + n) % 26;

// In ra man hinh ket qua
    cout << "Letter after " << k << " " << n << " units is: " << a[r] << endl;

    return 0;
}
