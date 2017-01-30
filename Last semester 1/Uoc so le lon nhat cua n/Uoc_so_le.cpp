#include <iostream>

using namespace std;

int main()
{
    int n;
    int i, r;

    cin >> n;

    for(i = 1; i < n; i+=2)
    {
        if (n%i ==0)
        {
            r = i;
        }
    }
    cout << r;
}
