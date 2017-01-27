#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int e, s = 0;
    while (n > 0)
    {
        e = n % 10;
        s += e;
        n = n / 10;
    }
    cout << s;
    return 0;
}
