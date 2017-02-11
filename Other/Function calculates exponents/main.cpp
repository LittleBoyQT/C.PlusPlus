#include <iostream>

using namespace std;

int myPow(int x, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        //calculate power of x
        result *= x;
    }
    return result;
}

int main()
{
    int x, n;

    cout << "Input x: ";
    cin >> x;

    cout << "Input n: ";
    cin >> n;

    // function call
    cout << x << "^" << n << " = "  << myPow(x,n);

    return 0;
}
